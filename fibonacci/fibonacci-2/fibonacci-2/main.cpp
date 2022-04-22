//
//  main.cpp
//  fibonacci-2
//
//  Created by Jean Pascal Cyusa Shyaka on 4/22/22.
//

// This program prints the number n of fibonacci numbers, entered by the user


#include <iostream>

using namespace std;

int main() {
    cout << "\n\n\t\u26FA WELCOME TO FIBONACCI 2.0 \u26E9\n\n";

    int n;
    unsigned long term1 {0}, term2{1}, nextTerm {0};
    
    cout << "\n\tHow many fibonacci terms do you want printed?\t";
    cin >> n;
    
    for (int i{0}; i<=n; i++) {        
        if (n == 1) {
            cout << term1 << " ";
            continue;
        }
        if (n == 2) {
            cout << term2 << " ";
            continue;
        }
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
        cout << nextTerm << " ";
    }
            
    cout << endl << endl;
    return 0;
}
