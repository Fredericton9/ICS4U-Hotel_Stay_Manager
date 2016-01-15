#include <iostream>
#include <windows.h>
#include <string>
#include "hotel.h"
using namespace std;

hotel::hotel(){
    checkInNum = 0;
}



//Admin Setting---------------------------------------------------------------------------------------------
void hotel::chgSetting(int numFloor, int totalRooms){
    hotelLayout = new int*[numFloor];
    for (int i = 0; i < numFloor; i++)
        hotelLayout[i] = new int[totalRooms];

    for(int floor = 0; floor < numFloor; floor++){
        for(int room = 0; room < totalRooms; room++){
            hotelLayout[floor][room] = 0;
            roomTypeNum = totalRooms/2;
        }
    }
    numFloorGb = numFloor;
    totalRoomsGb = totalRooms;
}

void hotel::hotelLayoutDisplay(){
    for(int floor = 0; floor < numFloorGb; floor++){
        cout << "Floor: " << floor + 1 << endl;
        cout << "---------" << endl;
        for(int room = 0; room < totalRoomsGb; room++){
            cout << hotelLayout[floor][room] << endl;
        }
        cout << "---------" << endl;
        Sleep(1000);
    }
}

void hotel::timeTick(){
    for(int floor = 0; floor < numFloorGb; floor++){
        for(int room = 0; room < (roomTypeNum*2); room++){;
            if(hotelLayout[floor][room] != 0){
                hotelLayout[floor][room] -= 1;
                if(hotelLayout[floor][room] == 0){
                    cout << "Thank you for your stay at our hotel, customer in Room " << floor + 1 << room << "." << endl;
                    Sleep(1000);
                }
            }
        }
    }checkInNum = 0;
}

bool hotel::isFull(){
    for(int floor = 0; floor < numFloorGb; floor++){
        for(int room = 0; room < totalRoomsGb; room++){
            if(hotelLayout[floor][room] == 0){
                return false;
            }
        }
    }return true;
}

//Customer Setting------------------------------------------------------------------------------------------
int hotel::checkIn(int floorNum, int roomTypeCode, int timeStay){
    int startNum = 0;
    if(roomTypeCode == 2)
        startNum = roomTypeNum;
    int isAvailable = false;
    for(int num = startNum; num < (roomTypeNum + startNum); num++){
        if(hotelLayout[floorNum - 1][num] == 0){
            cout << "Thank you for the reservation. Your code is " << floorNum << " and " << num << endl;
            hotelLayout[floorNum - 1][num] = timeStay;
            isAvailable = true;
            checkInNum += 1;
            return checkInNum;
        }
    }
    if(isAvailable == false){
        cout << "There are no room of your preference on this floor. Please choose another floor or 0 to cancel: ";
        cin >> floorNum;
        if(floorNum != 0){
            checkIn(roomTypeCode, floorNum, timeStay);
        }
    }
}

void hotel::changeRoom(int floorNum1, int num1, int floorNum2, int num2){
    if(hotelLayout[floorNum1 - 1][num1] != 0 and hotelLayout[floorNum2 - 1][num2] == 0){
        cout << "Are you sure you want to change rooms? (y/n) ";
        cin >> answer;
        if(answer == 'y'){
            cout << "Your new code is " << floorNum2 << " and " << num2 << endl;
            hotelLayout[floorNum2 - 1][num2] = hotelLayout[floorNum1 - 1][num1];
            hotelLayout[floorNum1 - 1][num1] = 0;
        }
    }if(hotelLayout[floorNum2 - 1][num2] != 0){
        cout << "\nThe room you choose to change to is not available. choose another room." << endl;
        cout << "Floor Number: ";
        cin >> floorNum2;
        cout << "Room Number: ";
        cin >> num2;
        changeRoom(floorNum1, num1, floorNum2, num2);
    }else{
        cout << "The code you entered is invalid. Your transaction is canceled" << endl;
    }
}

void hotel::changeTime(int floorNum, int num, int addTimeStay){
    if(hotelLayout[floorNum - 1][num] != 0){
        cout << "Are you sure you want to change the time? (y/n) ";
        cin >> answer;
        if(answer == 'y'){
            hotelLayout[floorNum - 1][num] += addTimeStay;
            cout << "Thank you for choosing our hotel." << endl;
            if(hotelLayout[floorNum - 1][num] < 0){
                hotelLayout[floorNum - 1][num] = 0;
            }
        }
    }else{
        cout << "The code you entered is invalid. Your transaction is canceled" << endl;
    }
}

void hotel::checkOut(int floorNum, int num){
    if(hotelLayout[floorNum - 1][num] != 0){
        cout << "Are you sure you want to check out now? (y/n) ";
        cin >> answer;
        if(answer == 'y'){
            hotelLayout[floorNum - 1][num] = 0;
            cout << "Thank you for your stay at our hotel." << endl;
        }
    }else{
        cout << "The code you entered is invalid. Your transaction is canceled" << endl;
    }
}
