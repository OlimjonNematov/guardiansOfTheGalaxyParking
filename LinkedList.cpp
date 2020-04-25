//
// Created by Olimjon Nematov on 4/16/20.
//

#include "LinkedList.h"
#include "Ship.h"
LinkedList::LinkedList(){
    Ship *h=
           //*
    new Ship("head","id",-1);
    h->setNext(nullptr);
    head= h;
             //*/
    y='y';
}
//overloaded contrsuctor
LinkedList::LinkedList(Ship* s){
    head=s;
}
//overloaded operators
Ship* LinkedList::operator+=(Ship *s1){
    Ship *tempShip=new Ship;
    tempShip=s1;
    Ship *ptr=head;
    while(ptr->getNext()!= NULL){
        ptr=ptr->getNext();
    }
    ptr->setNext(tempShip);

    return this->head;
}

Ship* LinkedList::operator--(){
    //removes the node in beginning of list
    Ship *temp=this->head->getNext();
    if(this->head->getNext()==NULL){
        return this->head;
    }
    this->head=this->head->getNext();
    delete(temp);

    return this->head;
}
LinkedList::~LinkedList() {
    Ship *temp;
    while(head!= nullptr){
        temp=head->getNext();
        delete (head);
        head=temp;
    }

}