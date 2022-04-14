//
//  main.cpp
//  switch_statement
//
//  Created by Jean Pascal Cyusa Shyaka on 4/2/22.
//

#include <iostream>

using namespace std;

int main() {
    char grade {};
    cout << "Enter the grade you expect to get\n"; cin >> grade;
    
    switch (grade) {
        case 'a':
        case 'A':
            cout << "You need 90 or above.\n";
            break;
        case 'b':
        case 'B':
            cout << "You need 80 to 89.\n";
            break;
        case 'c':
        case 'C':
            cout << "You need 70 to 79.\n";
            break;
        case 'd':
        case 'D':
            cout << "You need 60 to 69.\n";
            break;
        case 'e':
        case 'E':
            cout << "You need 40 to 59.\n";
            break;
        case 'u':
        case 'U':
            cout << "You need 11 to 39.\n";
            break;
        case 'f':
        case 'F': {
            char confirm {};
            cout << "\nAre you sure you want an F? (y/n) "; cin >> confirm;
            
            if (confirm=='y' || confirm=='Y')
                cout << "\nOk! I guess you didn't study.\n";
            else if (confirm=='n' || confirm=='N')
                cout << "\nThat's good. Go study.\n";
            else
                cout << "\nSorry, that's not a valid answer. Enter (y/n).\n";
            break;
        }
                        
        default:
            cout << "\nSorry, that's not a valid grade\n\n";
    }
    
}
