#include "renameThis.h"

int roomTypeToInt(string roomType){
  string roomTypes[4] = {'ocean view double','ocean view single','regular double','regular single'};
  for(int x = 0; x < 3; x++){
    if(roomType == roomTypes[x]){
      return x;
    }
  }
}

int main{

}
