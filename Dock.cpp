//
// Created by Olimjon Nematov on 4/20/20.
//

#include "Dock.h"
//constructors
Dock::Dock(){

}
Dock::Dock(int h,int m){
    hours=h;
    mins=m;
}
Dock::Dock(Dock &d) {
    hours=d.hours;
    mins=d.mins;
    ship=d.ship;
}

//setters
void Dock::setShip(Ship *s) {
    ship=s;
    /*
    Ship *temp= nullptr;
    temp=this->ship;
    this->ship=s;
    s=temp;
    //*/
}