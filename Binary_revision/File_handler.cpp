/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   File_handler.cpp
 * Author: blair
 * 
 * Created on 10 May 2018, 5:40 PM
 */
#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

#include "Person.h"
#include "File_handler.h"
using namespace std;

File_handler::File_handler() {
}

File_handler::File_handler(const File_handler& orig) {
}

File_handler::~File_handler() {
}

void File_handler::write_to_file() {

    fstream infile;
    infile.open("testing.txt", ios::binary | ios::in | ios::out);
    
    int v_size = persons.size();

    if (!infile.is_open()) {
        cout << " doesn't seem to have opened correctly" << endl;

    } else {
        cout << " the file must've opened...." << endl;

      // infile.write((char*)&persons, sizeof(persons));

        cout << "vector size in filer: " << v_size << endl;

    }
    infile.close();
}