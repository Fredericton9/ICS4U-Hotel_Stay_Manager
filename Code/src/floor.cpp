#include <string>
#include "floor.h"

floor::floor(int floorNum, int totalRooms, int splRooms){
    int floorNum = floorNum;
    int totalRooms = totalRooms;
    int splRooms = splRooms;
    int regRooms = totalRooms - splRooms;
}

void floor::checkIn(int roomTypeCode){
    if(roomTypeNum[roomTypeCode] != 0){
        roomTypeNum[roomTypeCode] -= 1;
    }
}

void floor::checkOut(int roomTypeCode){
    roomTypeNum[roomTypeCode] += 1;
}
