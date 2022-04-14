//
//  main.cpp
//  do-while
//
//  Created by Jean Pascal Cyusa Shyaka on 4/7/22.
//

#include <iostream>

using namespace std;

int main() {
    cout << "\n\n\t===== Pascal's Resto Menu =====\n\n";

    char choice {};

    do {
        cout << "1 " << "Cheese Burger" << endl;
        cout << "2 " << "Beef Burger" << endl;
        cout << "3 " << "Macaroni" << endl;
        cout << "Q " << "Quit" << endl;
        
        cout << "\nChoose a character corresponding to your choice: "; cin >> choice;
        
        if (choice=='1') {
            const float price1 {12.4};
            cout << "\nYou chose Cheese burger. Price = $" << price1 << endl << endl;
        }
        else if (choice=='2') {
            const float price2 {10.4};
            cout << "\nYou chose Beef burger. Price = $" << price2 << endl << endl;
        }
        else if (choice=='3') {
            const float price3 {9.4};
            cout << "\nYou chose Macaroni. Price = $" << price3 << endl << endl;
        }
        else if (choice=='q' || choice=='Q')
            cout << "\nSorry to see you go. Bye!" <<endl << endl;
        
        else cout << "\nIncorrect choice. Try again.\n\n";
        
    } while (choice!='q' && choice!='Q');
    
    return 0;

}
