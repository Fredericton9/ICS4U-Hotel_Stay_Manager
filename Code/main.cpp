#include "hotel.h"
#include "menu.h"

#include <string>
#include <iostream>

using namespace std;

int main{
    int adminPass, numFloor, totalRooms, passTry, editType, addDays;
    int info[3], code1[2], code2[2];
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
            bool wrongPw = true;
            while(wrongPw){
                cout << "Please enter the administrative password in order to change your settings or 0 to cancel transaction. ";
                cin >> passTry;
                if(passTry == adminPass){
                    wrongPw = false;
                    
                    //Re-Initizalized the hotel layout variables, and plugs them into the first generated building.
                    cout << "Before we start, we would like to know; What are the current number of floors? ";
                    cin >> numFloor;
                    
                    cout << "What is the total number of rooms PER floor? Note that it MUST be an even number, else your hotel doesn't make sense. ";
                    cin >> totalRooms;
                    
                    hotelObj.chgSetting(numFloor, totalRooms);
                    
                }else{
                    cout << "Wrong password!!!" << endl;
                }
            }
        }if (currentDisplay == 2){
            info = menuObj.checkIn(numFloor);
            hotelObj.checkIn(info[0],info[1],info[2]);
        }if (currentDisplay == 3){
            editType = menuObj.editDisplay();
            cout << "Enter your code" << endl;
            code1 = menuObj.enterCode();
            if (editType == 1){
                code2 = menuObj.enterCode();
                hotelObj.changeRoom(code1[0],code1[1],code2[0],code2[1]);
            }if (editType == 2){
                cout << "How many more days do you wish to stay here? ";
                cin >> addDays;
                hotelObj.changeTime(code1[0],code1[1],addDays);
            }if (editType == 3){
                hotelObj.checkout(code1[0],code1[1]);
            }
        }
    }
}
