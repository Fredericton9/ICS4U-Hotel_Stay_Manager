#include "hotel.h"
#include "menu.h"

#include <string>
#include <iostream>

std namespace;

int main{
    int adminPass, numFloor, totalRooms;
    char dayConfirm;
    
    //Admin is prompted for a password before pass.
    cout << "Good morning/afternoon/evening! Welcome to Hotel Management Assistant v1.0.0" << endl;
    cout << "Please create the number password for adminstrative privileges: ";
    cin >> adminPass;
    
    //Initizalized the hotel layout variables, and plugs them into the first generated building.
    cout << "Before we start, we would like to know; What are the current number of floors? ";
    cin >> numFloor;
    
    cout << "What is the total number of rooms PER floor? Note that it MUST be an even number, else your hotel doesn't make sense. ";
    cin >> totalRooms;
    
    //Creates class objects
    menu menuObj;
    hotel hotelObj;
    hotelObj.chgSetting(numFloor, totalRooms);
    
    cout << "Would you like to start the day? (y/n) ";
    cin >> dayConfirm;
    
    while(dayConfirm == "y"){
        int currentDisplay = menuObj.display();
        if (currentDisplay == 1){
            cout << "Please enter the administrative password in order to change your settings. ";
            
        }
    }
}
