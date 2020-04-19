//
// Created by Olimjon Nematov on 4/19/20.
//

#include "Ship.h"
#include <iostream>

Ship::Ship(){
    name="";
    id="";
    credits=0;
}
Ship::Ship(std::string n,std::string i,int c ){
    name=n;
    id=i;
    credits=c;
}
Ship::Ship(Ship &s){
    name=s.name;
    id=s.id;
    credits=s.credits;
}