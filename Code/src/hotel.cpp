#include <string>
#include "hotel.h"

hotel::hotel();

void hotel::chgSetting(int floorNum, int regRooms, int splRooms){
    if(totalRooms ){
        int hotel[floorNum][2];
        for(int i = 0; i < floorNum; i++) {
            hotel[i][0] = regRooms;
            hotel[i][1] = splRooms;
        }
        int totalRooms = totalRooms;
        splRooms = splRooms;
        regRooms = totalRooms - splRooms;
    }else{
        cout << "There are customers still staying at the hotel. are you sure? (y/n) ";
    }
}
