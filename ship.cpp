#include <iostream>
#include "ship.h"

ship::ship(){
    name="";
    id="";
    credits=0;
    next=nullptr;
}
ship::ship(std::string n,std::string i,int c ){

}
ship::ship(ship &s){
    name=s.name;
    id=s.id;
    credits=s.id;
}