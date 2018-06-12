/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AirPlane.cpp
 * Author: gad
 * 
 * Created on June 12, 2018, 12:45 PM
 */

#include "airPlane.h"
#include "wingType.h"
#include <iostream>

airPlane::airPlane() {
     std::cout << "Air Plane constractor called" << std::endl; 
}

airPlane::airPlane(const airPlane& orig) {
}
airPlane::airPlane(std::string name, wingType* WingType): Name(name), WingType(WingType){
std::cout << "Air Plane constractor called with Name:"<< this->GetName() << " Wing: " << this->GetWingType() << endl;
}
airPlane::airPlane(std::string name):  Name(name), WingType(new wingType){
    
    std::cout << "Air Plane constractor called with Name:"<< this->GetName() << " Wing: " << this->GetWingType() << endl;
}
airPlane::~airPlane() {
    std::cout << "Air Plane with name "<< this->GetName() << " Destroyed"<< endl;
}

