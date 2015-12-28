#include <string>
#include "floor.h"

floor::floor(int floorNum, int roomTypeNum[]){
    int floorNum = floorNum;
    int roomTypeNum[4] = roomTypeNum;
}

void floor::checkIn(int roomTypeCode){
    if(roomTypeNum[roomTypeCode] != 0){
        roomTypeNum[roomTypeCode] -= 1;
    }
}

void floor::checkOut(int roomTypeCode){
    roomTypeNum[roomTypeCode] += 1;
}
