#include <iostream>
#include <string>
#include "menu.h"
using namespace std;

menu::menu(){
}

int menu::display(){
    answer = -1;
    cout << "-------MENU-------" << endl;
    cout << "1. Hotel Setting" << endl;
    cout << "2. Check-in" << endl;
    cout << "3. Edit Your Stay" << endl;
    cout << "------------------" << endl;
    cin >> answer;
    return answer;
}

int* menu::checkIn(int numFloor){
    int info[3];
    cout << "Which floor would you like to stay? (1 - " << numFloor << ") ";
    cin >> answer;
    info[0] = answer;
    cout << "Which room would you like to stay (1. Special Room, 2. Regular Room)? ";
    cin >> answer;
    info[1] = answer;
    cout << "How long do you plan to stay here? ";
    cin >> answer;
    info[2] = answer;
    return info;
}

int* menu::enterCode(){
    int code[2];
    cout << "Floor Number: ";
    cin >> answer;
    code[0] = answer;
    cout << "Room Number: " << endl;
    cin >> answer;
    code[1] = answer;
    return code;
}

int menu::editDisplay(){
    int answer = -1;
    cout << "How do you want to edit your stay" << endl;
    cout << "1. Change Rooms" << endl;
    cout << "2. Change Time" << endl;
    cout << "3. Check Out" << endl;
    cin >> answer;
    return answer;
}
