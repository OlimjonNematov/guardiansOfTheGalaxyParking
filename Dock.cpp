//
// Created by Olimjon Nematov on 4/20/20.
//

#include "Dock.h"
//constructors
Dock::Dock(){

}
Dock::Dock(Ship *s){
    ship=s;
}
Dock::Dock(Dock &d) {
    hours=d.hours;
    mins=d.mins;
    ship=d.ship;
}

//setters
void Dock::setShip(Ship *s) {
    ship=s;
}