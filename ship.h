//
// Created by Olimjon Nematov on 4/16/20.
//

#ifndef PROJECT4_SHIP_H
#define PROJECT4_SHIP_H
#include <iostream>

class ship {
private:
    std::string name;
    std::string id;
    int credits;
    ship *next= nullptr;
public:
    //contructor
    ship();
    //overloaded constructor
    ship(std::string n,std::string i,int c );
    //copy conntructor
    ship(ship &s);

    //getters
    std::string getName(){ return name;}
    std::string getId(){ return id;}
    int getCredits(){ return credits;}

    //setters
    void setName(std::string n){name=n;}
    void setId(std::string i){id=i;}
    void setCredits(int c){credits=c;}
    void setNext(ship *s);
};


#endif //PROJECT4_SHIP_H
