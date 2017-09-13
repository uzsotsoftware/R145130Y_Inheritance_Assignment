/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: R145130Y
 *
 * Created on September 13, 2017, 6:58 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
class Tools{
protected:
    int strength;
    char type;
    bool fight;
public:
    void Setstrength(int thisstr){
    strength = thisstr;
    }
    void fight(bool f){
        
        if(fight == true){
            return "go to Tool";
    }
        if(fight == false){
            return "lose";
            break;
        }
    
};
class Rock:public Tools{
public:
    Rock(int thisstr,char thistyper):Tools(thisstr,thistyper){
        //strength = thisstrength;
        type = thistyper;
    }
};
class Paper:public Tools{
public:
    Paper(int thisstr,char thistypep):Tools(thisstr,thistypep){
        //strength = thisstrength;
        type = thistypep;
    }
};
class Scissors:public Tools{
public:
   Scissors(int thisstr,char thistypes):Tools(thisstr,thistypes){
        //strength = thisstrength;
        type = thistypes;
    }
};
int main(int argc, char** argv) {

    return 0;
}

