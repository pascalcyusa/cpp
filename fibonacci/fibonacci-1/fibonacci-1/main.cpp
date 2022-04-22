//
//  main.cpp
//  fibonacci-1
//
//  Created by Jean Pascal Cyusa Shyaka on 4/22/22.
//

// This program prints the first 100 fibonacci series

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    cout << "\n\n\t\u26FA WELCOME TO FIBONACCI 1.0 \u26E9\n\n";

    vector<unsigned long> fibo (100);
    unsigned long last {0};
    unsigned long next {1};
    
    do {
        for (auto f: fibo) {
            cout << setw(20) << last << '\n';
            f = last + next;
            next = last;
            last = f;
        }
    } while (next < (fibo.size())/2);
    
    cout << endl << endl;
    return 0;
}

