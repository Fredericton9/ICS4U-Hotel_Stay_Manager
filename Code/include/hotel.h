#ifndef HOTEL_H
#define HOTEL_H

class hotel
{
    public:
        hotel();
        void chgSetting(int numFloor, int regRooms);
        void checkIn(int roomTypeCode, int floorNum, int timeStay);
        void changeRoom(int floorNum1, int roomTypeCode1, int num1, int floorNum2, int roomTypeCode2, int num2);
        void changeTime(int floorNum, int roomTypeCode, int num, int addTimeStay);
        void checkOut(int floorNum, int roomTypeCode, int num);

#endif // HOTEL_H
