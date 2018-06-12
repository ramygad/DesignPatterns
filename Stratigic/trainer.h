/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   trainer.h
 * Author: gad
 *
 * Created on June 12, 2018, 2:54 PM
 */

#ifndef TRAINER_H
#define TRAINER_H
#include <string>
#include <iostream>
#include "airPlane.h"
#include "highWing.h"

class trainer: public airPlane {
public:
    trainer();
    trainer(std::string name);
    trainer(const trainer& orig);
    virtual ~trainer();
private:

};

#endif /* TRAINER_H */

