/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   trainer.cpp
 * Author: gad
 * 
 * Created on June 12, 2018, 2:54 PM
 */

#include "trainer.h"

trainer::trainer() {
    
}
trainer::trainer(std::string name): airPlane(name,new highWing()){
  
    
}
trainer::trainer(const trainer& orig) {
}

trainer::~trainer() {
    std::cout<< "Trainer Destroyed "<< std::endl;
}

