/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: blair
 *
 * Created on 10 May 2018, 10:08 AM
 */

#ifndef PERSON_H
#define PERSON_H
#include <vector>
using namespace std;

class Person {
public:
    Person();
    Person(const Person& orig);
    virtual ~Person();
    void add_to_vec();
    void set_person(string first, string last, int age);
    void print_person();
private:
    struct person{
       string fname, lname;
       int age;
    };

    vector<person> persons;
};

#endif /* PERSON_H */

