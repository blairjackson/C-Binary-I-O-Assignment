/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.cpp
 * Author: blair
 * 
 * Created on 10 May 2018, 10:08 AM
 */
#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

#include "Person.h"
#include "File_handler.h"

using namespace std;

Person::Person() {
}

Person::Person(const Person& orig) {
}

Person::~Person() {
}

void Person::add_to_vec() {
    persons.push_back(person());

}

void Person::set_person(string first, string last, int age) {
    int list_pos = persons.size() - 1;
    cout << "list size is " << list_pos << endl;
    persons[list_pos].fname = first;
    persons[list_pos].lname = last;
    persons[list_pos].age = age;
}

void Person::print_person() {
    cout << persons[0].fname << endl;
    cout << persons[0].lname << endl;
    cout << persons[0].age << endl;

}

void Person::info() {
    int v_size = persons.size();

    cout << "vector size: " << v_size << endl;

    int len_fname = (persons[0].fname.size() * sizeof (char));
    int len_lname = (persons[0].lname.size() * sizeof (char));
    cout << "fname size: " << len_fname << endl;
    cout << "lname size: " << len_lname << endl;
    cout << persons[0].age << endl;

}

void Person::save_info() {

    ofstream out(filename, ios::binary);
    size_t size = persons.size();
    out.write(reinterpret_cast<char*> (&size), sizeof (size_t));

    for (auto& pers : persons) {
        size = pers.fname.size();
        out.write(reinterpret_cast<char*> (&size), sizeof (size_t));
        out.write(pers.fname.c_str(), size);

        cout << "the size when put in should be .... " << size << endl;

        size = pers.lname.size();
        out.write(reinterpret_cast<char*> (&size), sizeof (size_t));
        out.write(pers.lname.c_str(), size);

        size = sizeof (int);
        out.write(reinterpret_cast<char*> (&size), sizeof (size_t));
        out.write(reinterpret_cast<char*> (&pers.age), size);
    }
    out.close();
}

void Person::read_info() {

    ifstream input_file(filename, ios::binary);
    //vector<persons> persons_in;
    // input_file.read((char*) &persons_in, sizeof (persons_in));


    unsigned stringsize;

    input_file.seekg(0);
    input_file.read(reinterpret_cast<char *> (&stringsize), sizeof (unsigned));

    //Cannot read to a string directly, must have buffer intermediate
    vector<char> temp(stringsize);
    input_file.read(reinterpret_cast<char *> (&temp[0]), stringsize * sizeof (char));
    string thestring(temp.begin(), temp.end());

    cout << temp[0] << endl;

    cout << "this is the string size for the read in: " << stringsize << ' ' << thestring << endl;


    string contentOut = "";
    input_file.seekg(0, ios::end);
    streampos length = input_file.tellg();
    input_file.seekg(0, ios::beg);

    
    // need to write a loop to add to vector so it's not adding as one string
    vector<char> buffer(length);
    input_file.read(&buffer[0], length);

    contentOut.assign(&buffer[0], length);
    
    cout << contentOut << endl;


    input_file.close();
}