#include <string>
#ifndef HOTEL_H
#define HOTEL_H

class hotel
{
    public:
        hotel();
        void chgSetting(int floorNum, int totalRooms, int splRooms);
        void checkIn(int roomTypeCode, int floorNum);
        void checkOut();

#endif // HOTEL_H
