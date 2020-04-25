//
// Created by Olimjon Nematov on 4/20/20.
//

#ifndef PROJECT4_DOCK_H
#define PROJECT4_DOCK_H

#include "Ship.h"

class Dock {
private:
    int hours=0;
    int mins=0;
    Ship *ship;
public:
    Dock();
    Dock(int hrs,int min);
    Dock(Dock &d);

    //getter
    int getHours(){ return hours;}
    int getMins(){return mins;}
    Ship* getShip(){return ship;}

    //setter
    void setHours(int h){hours=h;}
    void setMins(int m){mins=m;}
    void setShip(Ship *ship);
};


#endif //PROJECT4_DOCK_H
