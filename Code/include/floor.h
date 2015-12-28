#include <string>
#ifndef FLOOR_H
#define FLOOR_H

class floor
{
    public:
        floor(int floorNum, int roomTypeNum[]);
        void checkIn(string roomType);
        void checkOut();

#endif // FLOOR_H
