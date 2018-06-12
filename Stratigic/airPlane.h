/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AirPlane.h
 * Author: gad
 *
 * Created on June 12, 2018, 12:45 PM
 */

#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>

#include "wingType.h"
using namespace std;

class airPlane {
public:
    airPlane();
    airPlane(std::string name);
    airPlane(std::string name, wingType* WingType);
    airPlane(const airPlane& orig);
    virtual ~airPlane();
    void SetName(string Name){
        this->Name = Name;
    }
    string GetName(){
        return this->Name;
    }
    void SetWingType(wingType* WingType){
        this->WingType = WingType;
    }
    std::string GetWingType()
    {
        return this->WingType->getWingType();
    }
    
private:
    std::string Name;
    wingType* WingType;
};

#endif /* AIRPLANE_H */

