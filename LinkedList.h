//
// Created by Olimjon Nematov on 4/16/20.
//

#ifndef PROJECT4_LINKEDLIST_H
#define PROJECT4_LINKEDLIST_H

#include "Ship.h"

class LinkedList {
private:
    Ship* head= nullptr;
    char y;
public:
    //constructor
    LinkedList();
    //overloaded contrsuctor
    LinkedList(Ship* s);

    //overloaded operators
    Ship* operator+=(Ship *s);
    Ship* operator--();

    //get
    Ship *getHead(){return this->head;}
    //set
    void *setHead(Ship *s1){ this->head=s1;}

    //destructor
    ~LinkedList();
};


#endif //PROJECT4_LINKEDLIST_H
