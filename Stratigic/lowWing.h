/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lowWing.h
 * Author: gad
 *
 * Created on June 12, 2018, 2:37 PM
 */

#ifndef LOWWING_H
#define LOWWING_H
#include <string>
#include "wingType.h"

class lowWing: public wingType {
public:
    lowWing();
    lowWing(const lowWing& orig);
    virtual ~lowWing();
    std::string getWingType() override{
      return   std::string("Low Wing");
    }
private:

};

#endif /* LOWWING_H */

