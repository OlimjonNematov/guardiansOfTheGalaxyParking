//
// Created by Olimjon Nematov on 4/20/20.
//

#ifndef PROJECT4_SPACE_H
#define PROJECT4_SPACE_H


#include "Ship.h"

class Space {
private:
    int hours=0;
    int mins=0;
    Ship *ship= nullptr;
public:
    Space();
    Space(Ship *s);
    Space(Space &d);

    //getter
    int getHours(){ return hours;}
    int getMins(){return mins;}
    Ship* getShip(){return ship;}

    //setter
    void setHours(int h){hours=h;}
    void setMins(int m){mins=m;}
    void setShip(Ship *ship);
};


#endif //PROJECT4_SPACE_H
