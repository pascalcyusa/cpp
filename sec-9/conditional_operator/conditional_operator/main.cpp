//
//  main.cpp
//  conditional_operator
//
//  Created by Jean Pascal Cyusa Shyaka on 4/2/22.
//

#include <iostream>
using namespace std;

int main() {
    int num {};
    cout << "Enter an integer "; cin >> num;
    
    // using if-else
    if (num%2 == 0) {
        cout << num << " is even\n\n";  
    } else {
        cout << num << " is odd\n\n";
    }
    
    // using a conditional operator
    
    cout << num << " is " << ((num%3 == 0) ? " a multiple of 3 \n\n" : " not a multiple of 3 \n\n" );

}
