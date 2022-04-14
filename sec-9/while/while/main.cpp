//
//  main.cpp
//  while
//
//  Created by Jean Pascal Cyusa Shyaka on 4/5/22.
//

#include <iostream>

using namespace std;

int main() {
    
    /*
    int numb {};
    cout << "Enter an integer less than 100: "; cin >> numb;
    
    while (numb<100) {
        cout << "Enter an integer less than 100: "; cin >> numb;
    }
    
    cout << "\n\nThanks!" << endl;
    */
    
    bool done {false};
    int numb {};
    
    
    while (!done) {
        cout << "\nEnter a number between 1 and 5: "; cin >> numb;
        if (numb<=1 || numb>=5)
            cout << "\nYou are out of range! Try again." << endl;
        else {
             cout <<"\nThanks." << endl;
             done = true;
        }
    }
}
