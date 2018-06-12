/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   highWing.h
 * Author: gad
 *
 * Created on June 12, 2018, 2:36 PM
 */

#ifndef HIGHWING_H
#define HIGHWING_H
#include <string>
#include "wingType.h"
class highWing : public wingType{
public:
    highWing();
    highWing(const highWing& orig);
    virtual ~highWing();
    std::string getWingType() override{
      return   std::string("High Wing");
    }
private:

};

#endif /* HIGHWING_H */

