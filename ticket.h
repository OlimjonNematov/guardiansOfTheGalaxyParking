//
// Created by Olimjon Nematov on 4/16/20.
//

#ifndef PROJECT4_TICKET_H
#define PROJECT4_TICKET_H

#include "Ship.h"
#include "Dock.h"
#include <fstream>

class ticket {
private:
    Ship* shipInfo;
    Dock* dockInfo;
    int hrs;
    int min;

public:
    ticket();
    ticket(Ship *s,Dock *d, int h, int m );
    ticket(ticket *t);

    Ship* getShip(){return shipInfo;}
    Dock* getDock(){return dockInfo;}
    int getHrs(){ return hrs;}
    int getMins(){ return min;}

    void setShip(Ship *s){shipInfo=s;}
    void setDock(Dock *d){dockInfo=d;}

    double calcFine();

    std::ostream operator<<(std::ostream& os);

};


#endif //PROJECT4_TICKET_H
