#include <iostream>
#include <windows.h>
#include <string>
#include "hotel.h"
using namespace std;

hotel::hotel(){
    int checkInNum = 0;
    int hotel[2][2][2] = {0,0,0,0,0,0};
    string answer;
}

bool isEmptyCheck(int numFloor, int regRooms){
    for(int floor = 0; floor < numFloor; floor++){
        for(int num = 0; num < 2; num++){
            for(int rooms = 0; rooms < regRooms; rooms++){
                if(int hotel[floor][num][rooms] != 0)
                    return false;
            }
        }
    }return true
}

//Admin Setting---------------------------------------------------------------------------------------------
void hotel::chgSetting(int numFloor, int regRooms){
    if(isEmptyCheck(numFloor, regRooms)){
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
            chgSetting(numFloor, regRooms, splRooms);
        }
    }
}

void timeTick(){
    for(int num = 0; num < regRooms; num++){
        if(int hotel[floorNum][roomTypeCode][num] != 0){
            hotel[floorNum][roomTypeCode][num] -= 1;
            if(hotel[floorNum][roomTypeCode][num] == 0){
                cout << "Thank you for your stay at our hotel." << endl;
                Sleep(2000);
            }
        }
    }
}

//Customer Setting------------------------------------------------------------------------------------------
void hotel::checkIn(int roomTypeCode, int floorNum, int timeStay){
    if(checkInNum < 4){
        bool isAvailable = false;
        for(int num = 0; nim < regRooms; num++){
            if(hotel[floorNum][roomTypeCode][num] == 0){
                cout << "Thank you for the reservation. Your code is " << floorNum << ", " << roomTypeCode << ", and " << num << endl;
                hotel[floorNum][roomTypeCode][num] = timeStay;
                isAvailable = true;
            }
        }
        if(isAvailable = false){
            cout << "There are no room of your preference on this floor. Please choose another floor (1 - " << numFloor << ") or 0 to cancel: ";
            cin >> floorNum;
            if(floorNum != 0){
                checkIn(roomTypeCode, floorNum);
            }
        }
        checkInNum += 1
    }else{
        cout << "The day is over. No more check in for the day.\n" << endl;
        timeTick();
    }
}

void hotel::changeRoom(int floorNum1, int roomTypeCode1, int num1, int floorNum2, int roomTypeCode2, int num2){
    if(hotel[floorNum1][roomTypeCode1][num1] != 0){
        cout << "Are you sure you want to change rooms? (y/n) ";
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

void hotel::changeTime(int floorNum, int roomTypeCode, int num, int addTimeStay){
    if(hotel[floorNum1][roomTypeCode1][num1] != 0){
        cout << "Are you sure you want to stay longer? (y/n) ";
        cin >> answer;
        if(answer == 'y'){
            hotel[floorNum][roomTypeCode][num] += addTimeStay;
            cout << "Thank you for your stay at our hotel." << endl;
        }
    }else{
        cout << "The code you entered is invaild. Your transaction is cancelled" << endl;
    }
}

void hotel::checkOut(int floorNum, int roomTypeCode, int num){
    if(hotel[floorNum1][roomTypeCode1][num1] != 0){
        cout << "Are you sure you want to check out now? (y/n) ";
        cin >> answer;
        if(answer == 'y'){
            hotel[floorNum][roomTypeCode][num] = 0;
            cout << "Thank you for your stay at our hotel." << endl;
        }
    }else{
        cout << "The code you entered is invaild. Your transaction is cancelled" << endl;
    }
}
