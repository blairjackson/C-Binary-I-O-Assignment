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

using namespace std;


Person::Person() {
}

Person::Person(const Person& orig) {
}

Person::~Person() {
}


void Person::add_to_vec(){
    persons.push_back(person());
    
}

void Person::set_person(string first, string last, int age){
    int list_pos = persons.size() - 1;
    cout << "list size is " << list_pos << endl;
    persons[list_pos].fname = first;
    persons[list_pos].lname = last;
    persons[list_pos].age = age;
}

void Person::print_person(){
    cout << persons[0].fname << endl;
    cout << persons[0].lname << endl;
    cout << persons[0].age << endl;
    
}

void Person::info(){
    int v_size = persons.size();
    
    cout << "vector size: " << v_size << endl;
    
    int len_fname = (persons[0].fname.size() * sizeof(char));
    int len_lname = (persons[0].lname.size() * sizeof(char));
    cout << "fname size: " << len_fname << endl;
    cout << "lname size: " << len_lname << endl;
    cout << persons[0].age;
    
}