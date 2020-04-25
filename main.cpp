#include <iostream>
#include <fstream>
#include "Ship.h"
#include "Dock.h"
#include "LinkedList.h"
#include <vector>

using namespace std;


void fillDockArr(Dock arr[], int size){
    for(int i=0; i<size;i++){
        Dock tempDock;
        arr[i]=tempDock;
    }
}
int hasSpotOpen(Dock arr[], int size){
    for(int i=0; i<size;i++){
        if(arr[i].getShip()== nullptr){
            return i;
        }
    }
    return -1;
}
int findWhichDockItWasIn(Dock arr[],string id){
    //check each element in the array and see if the id matches the
    for(int i=0;i<10;i++){
        if(arr->getShip()==NULL){
            continue;
        }
        if(arr[i].getShip()->getId()==id){
            return i;
        }
    }
    return -1;
}
int main() {

    //set up input file
    fstream in;
    in.open("in.txt",ios::in);
    if(!in.good()){
        cout<<"Could not opened"<<endl;
    }

    //if word ==enter then create new ships
    string tempString="";
    Dock dockArr[10];
    fillDockArr(dockArr,10);
    LinkedList queue;
    //get each line
    while(getline(in,tempString)){
        //create a vector of each word in the string
        vector <string> wordsInEachLine;
        //fill the vector for each stirng
        int prevSpace=-1;
        for(int i=0;i<tempString.length();i++){
            if(tempString.at(i)==' '){
                wordsInEachLine.push_back(tempString.substr(prevSpace+1,i-prevSpace-1));
                prevSpace=i;
            } else if(i==tempString.size()-1){
                wordsInEachLine.push_back(tempString.substr(prevSpace+1,i-prevSpace));
            }
        }
        cout<<wordsInEachLine.at(0)<<endl;
        if(wordsInEachLine.at(0)=="enter"){

            //create a new ship object
            Ship *tempShip=new Ship(wordsInEachLine.at(2),wordsInEachLine.at(3),stoi(wordsInEachLine.at(4)));

            if(hasSpotOpen(dockArr,10)!=-1){
                //if dock array is not full, add the ship to the open dock
                dockArr[hasSpotOpen(dockArr,10)].setShip(tempShip);
//                dockArr[hasSpotOpen(dockArr,10)].setMins(stoi(wordsInEachLine.at(1).substr(3,2)));
//                dockArr[hasSpotOpen(dockArr,10)].setHours(stoi(wordsInEachLine.at(1).substr(0,2)));
            }else{
                //if dock is full, add ship to linked list
                queue+=(tempShip);
            }

        }
        if(wordsInEachLine.at(0)=="exit"){
            Dock dockEmpty=dockArr[findWhichDockItWasIn(dockArr,wordsInEachLine.at(1))];
            Ship *tempShip=dockEmpty.getShip();
            int shipCredits=tempShip->getCredits();


            int hrsIn=dockEmpty.getHours();
            int minsIn=dockEmpty.getMins();
            int hoursOut=stoi(wordsInEachLine.at(2).substr(0,2));
            int hoursIn =stoi(wordsInEachLine.at(2).substr(3,2));
            int actualCredits=(hrsIn*60)+minsIn;
            cout<<wordsInEachLine.at(2)<<endl;
            //check if ticket should be generated
            if(!(actualCredits<=shipCredits)){
                cout<<"ticket "<<endl;
            }

            cout<<"Exiting and emptying dock:"<<endl;
            //remove the obj from the dock
            dockArr[findWhichDockItWasIn(dockArr,wordsInEachLine.at(1))].setShip(nullptr);

            //assign next ship to dock and change linked list

        }
    }

    //check
    cout<<"its all said and done"<<endl;
}
