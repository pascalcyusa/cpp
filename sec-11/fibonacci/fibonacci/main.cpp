//
//  main.cpp
//  fibonacci
//
//  Created by Jean Pascal Cyusa Shyaka on 4/23/22.
//

#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
    if (n<=1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2); // recursion
}


int main() {
    cout << fibonacci(5) << endl;
    cout << fibonacci(6) << endl;
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl;
    
    cout << endl;
    return 0;
}
