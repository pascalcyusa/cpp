//
//  main.cpp
//  fizzbuzz
//
//  Created by Jean Pascal Cyusa Shyaka on 4/17/22.
//

#include <iostream>

using namespace std;

int main() {
    cout << "\n\n\t\u26FA WELCOME TO FIZZBUZZ \u26E9\n\n";

    for (int i{1}; i<=100; ++i) {
        if (i%15 == 0)
            cout << "FizzBuzz ";
        if (i%3 == 0)
            cout << "Fizz ";
        else if (i%5 == 0)
            cout << "Buzz ";
        else
            cout << i << " ";
    }
    
    cout << endl;
    return 0;
}
