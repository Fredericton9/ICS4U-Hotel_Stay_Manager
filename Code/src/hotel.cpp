#include <iostream>
#include <string>
#include "hotel.h"
using namespace std;

hotel::hotel(){
    totalRooms;
    bool IsEmpty = true;
    string answer;
}

void hotel::chgSetting(int floorNum, int regRooms, int splRooms){
    if(IsEmpty){
        int hotel[floorNum][2];
        for(int i = 0; i < floorNum; i++) {
            hotel[i][0] = regRooms;
            hotel[i][1] = splRooms;
        }
        int totalRooms = (regRooms + splRooms) * floorNum;
    }else{
        cout << "There are customers still staying at the hotel. are you sure you want to edit? (y/n) ";
        cin >> answer;
        if(answer == 'y'){
            IsEmpty = true
            chgSetting(int floorNum, int regRooms, int splRooms)
        }
    }
}
