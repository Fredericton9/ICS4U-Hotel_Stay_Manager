#include <iostream>
#include <string>
#include "menu.h"
using namespace std;

menu::menu();

int menu::display(){
    int answer = -1;
    cout << "-------MENU-------" << endl;
    cout << "1. Hotel Setting" << endl;
    cout << "2. Check-in" << endl;
    cout << "3. Edit Your Stay" << endl;
    cout << "------------------" << endl;
    while(answer > 3 or answer < 0){
        cin >> answer;
    }
    return answer
}
