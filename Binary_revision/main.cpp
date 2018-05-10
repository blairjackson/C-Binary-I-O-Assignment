/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blair
 *
 * Created on 8 May 2018, 8:04 PM
 */

#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>

#include "Person.h" 

using namespace std;
//git test
//new git test
//
/*
 * 
 */
int main(int argc, char** argv) {

   // make sure the file already it exists, binary does not create one if it is not found

    
    Person blair;
    
    blair.add_to_vec();
    blair.set_person("Blair", "Jackson" , 29);
    blair.print_person();
    
    ifstream infile;
    infile.open("testing.txt", ios::binary | ios::in);

    if (!infile.is_open()) {
        cout << " doesn't seem to have opened correctly" << endl;

    } else {
        cout << " the file must've opened...." << endl;
        //figure out how to input to file, im too tired right now
       
    }
    infile.close();

    return 0;
}

