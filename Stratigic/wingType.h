/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   wingType.h
 * Author: gad
 *
 * Created on June 12, 2018, 2:14 PM
 */

#ifndef WINGTYPE_H
#define WINGTYPE_H
#include <string>

class wingType {
public:
    wingType();
    wingType(const wingType& orig);
    virtual ~wingType();
    virtual std::string getWingType(){return " Unknown";};
private:

};

#endif /* WINGTYPE_H */

