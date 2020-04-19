#include <iostream>
#include <fstream>
#include "Ship.h"

using namespace std;

int main() {

    //set up input file
    fstream in;
    in.open("in.txt",ios::in);
    if(in.good()){
        cout<<"Opened"<<endl;
    }

    //if word ==enter then create new ships
   string tempString="";
    //get each line
    while(getline(in,tempString)){
        //for each line, parse the string and find the first word
        string tempFirstWord=tempString.substr(0,tempString.find_first_of(' '));

        if(tempFirstWord=="enter"){
            
            //create a new ship object
            Ship *tempShip=new Ship();

            //if dock is not full, add the ship to the open dock

            //if dock is full, add ship to linked list
        }
        if(tempFirstWord=="exit"){
            //remove the obj from the dock

            //check if ticket should be generated

            //assign next ship to dock and change linked list

        }
    }

    //check

}
