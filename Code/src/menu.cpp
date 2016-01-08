#include <iostream>
#include <string>
#include "menu.h"
using namespace std;

menu::menu(){
    
}

void menu::display(){
    cout << "-------MENU-------" << endl;
    cout << "1. Hotel Setting" << endl;
    cout << "2. Check-in" << endl;
    cout << "3. Edit Your Stay" << endl;
    cout << "------------------" << endl;
}
