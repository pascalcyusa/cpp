//
//  main.cpp
//  switchEnum
//
//  Created by Jean Pascal Cyusa Shyaka on 4/3/22.
//

#include <iostream>

using namespace std;


enum direction {
    n, s, e, w
};


int main() {
    
    direction c {};
    char choice;
    cout << "Which way would you like to navigate? ";
    cin >> choice;
    c = static_cast<direction>(choice);
    
    switch (c) {
        case n:
            cout << "Go North\n";
            break;
        case s:
            cout << "Go South\n";
            break;
        case e:
            cout << "Go East\n";
            break;
        case w:
            cout << "Go West\n";
            break;
            
        default:
            cout << "\nSorry! Unidentified direction\n";
    }
    
}
