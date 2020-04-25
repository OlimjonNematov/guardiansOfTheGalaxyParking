//
// Created by Olimjon Nematov on 4/19/20.
//

#ifndef PROJECT4_SHIP_H
#define PROJECT4_SHIP_H
#include <string>

class Ship {
private:
    std::string name="";
    std::string id="";
    int credits=0;
    Ship *next;

public:
    //contructor
    Ship();
    //overloaded constructor
    Ship(std::string n,std::string i,int c );
    //copy conntructor
    Ship(Ship &s);

    //getters
    std::string getName(){ return name;}
    std::string getId(){ return id;}
    int getCredits(){ return credits;}
    Ship* getNext(){return this->next;}
    //setters
    void setName(std::string n){name=n;}
    void setId(std::string i){id=i;}
    void setCredits(int c){credits=c;}
    void setNext(Ship *s);
};


#endif //PROJECT4_SHIP_H
