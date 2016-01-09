#include <iostream>
#include <string>
#include "hotel.h"
using namespace std;

hotel::hotel(){
    bool IsEmpty = true;
    string answer;
}

//Admin Setting---------------------------------------------------------------------------------------------
void hotel::chgSetting(int numFloor, int regRooms){
    if(IsEmpty){
        int hotel[numFloor][2][regRooms];
        for(int floor = 0; floor < numFloor; floor++){
            for(int num = 0; num < 2; num++){
                for(int rooms = 0; rooms < regRooms; rooms++){
                    int hotel[floor][num][rooms] = 0;
                }
            }
        }
    }else{
        cout << "There are customers still staying at the hotel. Are you sure you want to edit? (y/n) ";
        cin >> answer;
        if(answer == 'y'){
            IsEmpty = true;
            chgSetting(numFloor, regRooms, splRooms);
        }
    }
}

void hotel::timeTick(){
    for(int i = 0; i < regRooms; i++){
        if(int hotel[floorNum][roomTypeCode][i] != 0){
            hotel[floorNum][roomTypeCode][i] -= 0
        }
    }
}

//Customer Setting------------------------------------------------------------------------------------------
void floor::checkIn(int roomTypeCode, int floorNum, int timeStay){
    bool isAvailable = false;
    for(int num = 0; nim < regRooms; num++){
        if(hotel[floorNum][roomTypeCode][num] == 0){
            cout << "Thank you for the reservation. Your code is " << floorNum << ", " << roomTypeCode << ", and " << num << endl;
            hotel[floorNum][roomTypeCode][num] = timeStay;
            isAvailable = true
        }
    }
    if(isAvailable = false){
        cout << "There are no room of your preference on this floor. Please choose another floor (1 - " << numFloor << ") or 0 to cancel: ";
        cin >> floorNum;
        if(floorNum != 0){
            checkIn(roomTypeCode, floorNum);
        }
    }
}

void hotel::changeRoom(int floorNum1, int roomTypeCode1, int num1, int floorNum2, int roomTypeCode2, int num2){
    if(hotel[floorNum1][roomTypeCode1][num1] != 0){
        cout << "Are you sure you want to edit? (y/n) ";
        cin >> answer;
        if(answer == 'y'){
            cout << "Your new code is " << floorNum2 << ", " << roomTypeCode2 << ", and " << num2 << endl;
            hotel[floorNum2][roomTypeCode2][num2] = hotel[floorNum1][roomTypeCode1][num1];
            hotel[floorNum1][roomTypeCode1][num1] = 0;
        }
    }else{
        cout << "The code you entered is invaild. Your transaction is cancelled" << endl;
    }
}

void changeTime(int floorNum, int roomTypeCode, int num, int addTimeStay){
    if(hotel[floorNum1][roomTypeCode1][num1] != 0){
        cout << "Are you sure you want to edit? (y/n) ";
        cin >> answer;
        if(answer == 'y'){
            hotel[floorNum][roomTypeCode][num] += addTimeStay;
            cout << "Your new reservation time is" << hotel[floorNum][roomTypeCode][num] << endl;
        }
    }else{
        cout << "The code you entered is invaild. Your transaction is cancelled" << endl;
    }
}
