/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   File_handler.h
 * Author: blair
 *
 * Created on 10 May 2018, 5:40 PM
 */

#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

class File_handler: public Person {
public:
    File_handler();
    File_handler(const File_handler& orig);
    virtual ~File_handler();
    void write_to_file();
private:

};

#endif /* FILE_HANDLER_H */

