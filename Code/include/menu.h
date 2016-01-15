#ifndef MENU_H
#define MENU_H

class menu{
    public:
        int answer;

        menu();
        int display();
        int adminDisplay();
        int* checkIn(int numFloor);
        int* enterCode();
        int editDisplay();
};

#endif // MENU_H
