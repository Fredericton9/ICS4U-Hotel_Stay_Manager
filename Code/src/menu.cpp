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
    while(answer > 3 or answer < 0){
        cout << "Choice: ";
        cin >> answer;
    }
    cout << endl << endl;
    return answer;
}

int menu::adminDisplay(){
    answer = -1;
    cout << endl;
    cout << "-------ADMIN MENU-------" << endl;
    cout << "1. Change Hotel Layout" << endl;
    cout << "2. Status of the Hotel" << endl;
    cout << "------------------------" << endl;
    while(answer > 2 or answer < 0){
        cout << "Choice: ";
        cin >> answer;
    }
    cout << endl << endl;
    return answer;
}

int* menu::checkIn(int numFloor){
    int info[3];
    cout << "Which floor would you like to stay? (1 - " << numFloor << ") ";
    cin >> info[0];
    cout << "Which room would you like to stay (1. Regular Room, 2. Special Room)? ";
    cin >> info[1];
    cout << "How long do you plan to stay here? ";
    cin >> info[2];
    return info;
}

int* menu::enterCode(){
    int code[2];
    cout << "Floor Number: ";
    cin >> code[0];
    cout << "Room Number: ";
    cin >> code[1];
    return code;
}

int menu::editDisplay(){
    int answer = -1;
    cout << "----Edit Stay----" << endl;
    cout << "1. Change Rooms" << endl;
    cout << "2. Change Time" << endl;
    cout << "3. Check Out" << endl;
    cout << "----------------" << endl;
    while(answer > 3 or answer < 0){
        cout << "Choice: ";
        cin >> answer;
    }
    return answer;
}
