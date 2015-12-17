#include <string>
#ifndef FLOOR_H
#define FLOOR_H

class floor
{
    public:
        floor(int floorNum, int roomTypeNum[]);
        bool roomAvailable(string roomType);
        void checkIn();
        void checkOut();

#endif // FLOOR_H
