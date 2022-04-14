//
//  main.cpp
//  if
//
//  Created by Jean Pascal Cyusa Shyaka on 3/31/22.
//

#include <iostream>

using namespace std;

int main() {
    int numb {};
    const int min {0};
    const int max {100};
    
    cout << "\nEnter a number between " << min << " and " << max << ": ";
    cin >> numb;
    
    if (numb >= min) {
        cout << "\n\t" << numb << " is greater than " << min;
        
        int diff {};
        diff = numb-min;
        cout << "\n\nThe number you entered is " << diff << " greater than " << min << endl << endl;
    }
    
    if (numb <= max) {
        cout << "\n\t" << numb << " is less than " << max;
        
        int diff {};
        diff = max-numb;
        cout << "\n\nThe number you entered is " << diff << " less than " << max << endl << endl;
    }
}
