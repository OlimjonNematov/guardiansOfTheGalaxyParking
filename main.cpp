#include <iostream>
#include <fstream>
#include "Ship.h"
#include "Dock.h"
#include <vector>

using namespace std;


void fillDockArr(Dock arr[], int size){
    for(int i=0; i<size;i++){
        Dock tempDock;
        arr[i]=tempDock;
    }
}
bool hasSpotOpen(Dock arr[], int size){
    for(int i=0; i<size;i++){
        if(arr[i].getShip()== nullptr){
            return true;
        }
    }
    return false;
}
int main() {

    //set up input file
    fstream in;
    in.open("in.txt",ios::in);
    if(in.good()){
        cout<<"Opened"<<endl;
    }

    //if word ==enter then create new ships
   string tempString="";
    Dock dockArr[10];
    fillDockArr(dockArr,10);
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
        if(wordsInEachLine.at(0)=="enter"){

            //create a new ship object
            Ship *tempShip=new Ship(wordsInEachLine.at(2),wordsInEachLine.at(3),stoi(wordsInEachLine.at(4)));


            if(hasSpotOpen(dockArr,10)){
                //if dock array is not full, add the ship to the open dock

            }else{
                //if dock is full, add ship to linked list

            }

        }
        if(wordsInEachLine.at(0)=="exit"){
            //remove the obj from the dock

            //check if ticket should be generated

            //assign next ship to dock and change linked list

        }
    }

    //check

}
