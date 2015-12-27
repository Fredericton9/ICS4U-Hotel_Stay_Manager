#include <string>
#include "floor.h"

floor::floor(int floorNum, int roomTypeNum[]){
    string roomTypes[4] = {'ocean view double','ocean view single','regular double','regular single'};
    int floorNum = floorNum;
    int roomTypeNum[4] = roomTypeNum;
}

bool floor::roomAvailable(string roomType, int pinCode){
    for(int x = 0; x < 3; x++){
        if(roomType == roomTypes[x] and roomTypeNum[x] != 0){
            return true;
            int pinCode = pinCode;
        }else{
            return false;
        }
    }
}

void floor::checkIn(int days){
    int days = days
}

void floor::checkOut(){
    
}
