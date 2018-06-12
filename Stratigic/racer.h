/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   racer.h
 * Author: gad
 *
 * Created on June 12, 2018, 4:01 PM
 */

#ifndef RACER_H
#define RACER_H

#include "lowWing.h"
#include"airPlane.h"
#include <string>
#include <iostream>

class racer : public airPlane {
public:
    racer();
    racer(const racer& orig);
    racer(std::string name ):airPlane(name, new lowWing){}
    virtual ~racer();
private:

};

#endif /* RACER_H */

