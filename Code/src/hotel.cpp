#include <iostream>
#include <string>
#include "hotel.h"
using namespace std;

hotel::hotel(){
    int numFloor = 2;
    bool IsEmpty = true;
    string answer;
}

void hotel::chgSetting(int numFloor, int regRooms, int splRooms){
    if(IsEmpty){
        int floor[2] = {regRooms, splRooms}
        int hotel[numFloor][2];
        for(int i = 0; i < numFloor; i++) {
            hotel[i][0] = regRooms;
            hotel[i][1] = splRooms;
        }
        int totalRooms = (regRooms + splRooms) * numFloor;
    }else{
        cout << "There are customers still staying at the hotel. are you sure you want to edit? (y/n) ";
        cin >> answer;
        if(answer == 'y'){
            IsEmpty = true
            chgSetting(numFloor, regRooms, splRooms)
        }
    }
}

void floor::checkIn(int roomTypeCode, int floorNum){
    if(roomTypeNum[floorNum][roomTypeCode] != 0){
        cout << "Thank you for the reservation." << endl;
        roomTypeNum[floorNum][roomTypeCode] -= 1;
    }else{
        cout << "There are no room of your preference on this floor. Please choose another floor (1 - " << numFloor << ") or 0 to cancel: ";
        cin >> floorNum;
        if(floorNum != 0){
            checkIn(roomTypeCode, floorNum)
        }
    }
}

void floor::checkOut(int roomTypeCode){
    roomTypeNum[roomTypeCode] += 1;
}
