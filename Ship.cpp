//
// Created by Olimjon Nematov on 4/19/20.
//

#include "Ship.h"
#include <iostream>

Ship::Ship(){
    name="";
    id="";
    credits=0;
    next= nullptr;
}
Ship::Ship(std::string n,std::string i,int c ){
    name=n;
    id=i;
    credits=c;
    next= nullptr;
}
Ship::Ship(Ship &s){
    name=s.name;
    id=s.id;
    credits=s.credits;
    next= s.next;
}
void Ship:: setNext(Ship *s1){
    std::cout<<"adding ship to next"<<std::endl;
    Ship *tempShip=s1;
    this->next=tempShip;
    /*
    Ship *tempShip=nullptr;
    tempShip=next;
    this->next=s1;
    s1->next=tempShip;
    //*/
}