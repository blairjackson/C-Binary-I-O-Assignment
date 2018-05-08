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

using namespace std;
//git test
//new git test
//
/*
 * 
 */
int main(int argc, char** argv) {

   // make sure the file already it exists, binary does not create one if it is not found
    
    ifstream infile;
    infile.open("testing.txt", ios::binary | ios::in);

    if (!infile.is_open()) {
        cout << " doesn't seem to have opened correctly" << endl;

    } else {
        cout << " the file must've opened...." << endl;
        
        infile >> "holy shit that was too easy";
        infile >> "\n something must be wrong?";
    }

    return 0;
}

