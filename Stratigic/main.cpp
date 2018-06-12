/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: gad
 *
 * Created on June 12, 2018, 12:44 PM
 */

#include <cstdlib>
#include <string>
#include <iostream> 

#include "airPlane.h"
#include "trainer.h"
#include "racer.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string keyboardInput;
    airPlane* plane1 = new airPlane("Fighter");
    airPlane* plane2 = new airPlane("airplane2");
    trainer* myTrainer = new trainer("Skywalker");
    racer* myRacer = new racer("Spitfire");
    delete plane1;
    delete plane2;
    delete myTrainer;
    delete myRacer;
    std::cout << "Press any key to Exit " << std::endl;
    
  // keyboardInput<< std::cin;
    return 0;
}

