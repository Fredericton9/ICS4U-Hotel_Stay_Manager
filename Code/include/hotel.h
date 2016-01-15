#ifndef HOTEL_H
#define HOTEL_H
#include <string>
using namespace std;

class hotel{
    private:
        int roomTypeNum;
        char answer;
        int numFloorGb;
        int totalRoomsGb;
        int checkInNum;
        int** hotelLayout;

    public:
        hotel();
        void chgSetting(int numFloor, int totalRooms);
        void hotelLayoutDisplay();
        void timeTick();
        int checkIn(int roomTypeCode, int floorNum, int timeStay);
        void changeRoom(int floorNum1,  int num1, int floorNum2, int num2);
        void changeTime(int floorNum, int num, int addTimeStay);
        void checkOut(int floorNum, int num);
        bool isFull();
};

#endif // HOTEL_H
