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
        cout << "There are customers still staying at the hotel. are you sure you want to edit? (y/n) ";
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
int floor::checkIn(int roomTypeCode, int floorNum, int timeStay){
    for(int i = 0; i < regRooms; i++){
        if(int hotel[floorNum][roomTypeCode][i] == 0){
            cout << "Thank you for the reservation. Your code is " << floorNum << ", " << roomTypeCode << ", and " << i << endl;
            hotel[floorNum][roomTypeCode][i] = timeStay;
            return 1;
        }
    }
    cout << "There are no room of your preference on this floor. Please choose another floor (1 - " << numFloor << ") or 0 to cancel: ";
    cin >> floorNum;
    if(floorNum != 0){
        checkIn(roomTypeCode, floorNum);
    }
}
