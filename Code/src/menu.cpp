#include <iostream>
#include <string>
#include "menu.h"
using namespace std;

menu::menu(string password){
    string password = password;
}

int menu::display(){
    int answer = -1;
    cout << "-------MENU-------" << endl;
    cout << "1. Hotel Setting" << endl;
    cout << "2. Check-in" << endl;
    cout << "3. Edit Your Stay" << endl;
    cout << "------------------" << endl;
    cin >> answer;
    return answer
}

int menu::checkInDisplay(int numFloor){
    int info[3];
    cout << "Which floor would you like to stay? (1 - " << numFloor << ") " << endl;
    cin >> answer;
    info[0] = answer;
    cout << "Which room would you like to stay?" << endl;
    cout << "1. Special Room" << endl;
    cout << "2. Regular Room" << endl;
    cin >> answer;
    info[1] = answer;
    cout << "How long do you plan to stay here? " << endl;
    cin >> answer;
    info[2] = answer;
}
