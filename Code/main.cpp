#include "hotel.h"
#include "menu.h"

#include <string>
#include <iostream>

std namespace;

int main{
    int adminPass;
    char dayConfirm;
    
    //Admin is prompted for a password before pass.
    cout << "Good morning/afternoon/evening! Welcome to Hotel Management Assistant v1.0.0" << endl;
    cout << "Please create the number password for adminstrative privileges: ";
    cin >> adminPass;
    
    //Creates class objects
    menu menuObj;
    hotel hotelObj;
    
    cout << "Would you like to start the day? (y/n) ";
    cin >> dayConfirm;
    
    while(dayConfirm == "y"){
        
    }
}
