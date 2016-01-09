#ifndef HOTEL_H
#define HOTEL_H
#include <string>
using namespace std;

class hotel{
    public:
        int roomTypeNum;
        char answer;
        int numFloorGb;
        int checkInNum;
        int** hotelLayout;

        hotel();
        void chgSetting(int numFloor, int totalRooms);
        void timeTick();
        void checkIn(int roomTypeCode, int floorNum, int timeStay);
        void changeRoom(int floorNum1,  int num1, int floorNum2, int num2);
        void changeTime(int floorNum, int num, int addTimeStay);
        void checkOut(int floorNum, int num);
};

#endif // HOTEL_H
