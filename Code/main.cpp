#include "hotel.h"
#include "menu.h"

#include <string>
#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int adminPass, numFloor, rooms, checkInNum, maxCheckInNum, addDays;
    int mainDisplayChoice, displayChoice;
    bool isFull = false;
    int *info, *code;
    char dayConfirm; // day starting command
    int days = 0; // time simulator

    //Administrator is prompted for a password before pass.
    cout << "Good morning/afternoon/evening! Welcome to Hotel Management Assistant v1.0.0" << endl;
    cout << "Please create the number password for administrative privileges: ";
    cin >> adminPass;
    Sleep(1000);

    //Initialized the hotel layout variables, and plugs them into the first generated building.
    cout << "\nBefore we start, we need the info; What are the current number of floors: ";
    cin >> numFloor;

    cout << "What is the number of rooms of a type PER floor: ";
    cin >> rooms;

    //Creates class objects
    menu menuObj;
    hotel hotelObj;
    hotelObj.chgSetting(numFloor, rooms*2);

    Sleep(1000);
    cout << "\n\n\nWould you like to start the day? (y/n) ";
    cin >> dayConfirm;

    maxCheckInNum = rand() % 4 + 2;
    cout << maxCheckInNum << endl;
    while(dayConfirm == 'y'){
        isFull = hotelObj.isFull(); // Check if the hotel is full
        //Initialized the display for the menu.
        if(isFull){
            cout << "The hotel is full. Please type 0 to continue. ";
            cin >> displayChoice;
            maxCheckInNum = rand() % 4 + 2; // check in of 3 to 6 customers per day
            hotelObj.timeTick();
            days += 1; // 1 day has passed
            Sleep(1000);
            cout << "\nDay " << days << " has passed. Would you like to start another day? (y/n) ";
            cin >> dayConfirm;
        }else{
            cout << "\n";
            mainDisplayChoice = menuObj.display();

            //The case for display #1
            if (mainDisplayChoice == 1){
                bool wrongPw = true;
                while(wrongPw){
                    int passTry;
                    cout << "Please enter the administrative password in order to change your settings or press enter to cancel transaction. ";
                    cin >> passTry;
                    if(passTry == adminPass){
                        displayChoice = menuObj.adminDisplay();
                        wrongPw = false;
                        if(displayChoice == 1){
                            //Re-Initialized the hotel layout variables, and plugs them into the first generated building.
                            cout << "What is the new number of floors? ";
                            cin >> numFloor;

                            cout << "What is the new number of rooms of a type PER floor? ";
                            cin >> rooms;

                            hotelObj.chgSetting(numFloor, rooms);
                        }if(displayChoice == 2){
                            hotelObj.hotelLayoutDisplay();
                        }
                    }else{
                        wrongPw = false;
                    }
                }

            //The case for display #2.
            }if (mainDisplayChoice == 2){
                info = menuObj.checkIn(numFloor);
                checkInNum = hotelObj.checkIn(info[0],info[1],info[2]);
                if(checkInNum == maxCheckInNum){
                    maxCheckInNum = rand() % 4 + 2; // check in of 3 to 6 customers per day
                    cout << maxCheckInNum << endl;
                    hotelObj.timeTick();
                    days += 1; // 1 day has passed
                    Sleep(1000);
                    cout << "\nDay " << days << " has passed. Would you like to start another day? (y/n) ";
                    cin >> dayConfirm;
                }

            //The case for display #3
            }if (mainDisplayChoice == 3){
                displayChoice = menuObj.editDisplay();
                cout << "\nEnter your code" << endl;
                code = menuObj.enterCode();
                int code1[2] = {code[0],code[1]};

                //Depending on the editing type, the client can change their variables.
                if (displayChoice == 1){
                    code = menuObj.enterCode();
                    int code2[2] = {code[0],code[1]};
                    hotelObj.changeRoom(code1[0],code1[1],code2[0],code2[1]);
                }if (displayChoice == 2){
                    cout << "How many more/less days do you wish to stay here? (negative numbers to lessen days)";
                    cin >> addDays;
                    hotelObj.changeTime(code1[0],code1[1],addDays);
                }if (displayChoice == 3){
                    hotelObj.checkOut(code1[0],code1[1]);
                }
            }
        }
    }hotelObj.hotelLayoutDisplay();
}
