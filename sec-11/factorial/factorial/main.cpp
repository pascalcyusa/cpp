//
//  main.cpp
//  factorial
//
//  Created by Jean Pascal Cyusa Shyaka on 4/23/22.
//

#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n) {
    if (n==0)
        return 1;
    return n * factorial(n-1);
}

int main() {
    cout << "factorial of 3 is " << factorial(3) << endl;
    cout << "factorial of 5 is " << factorial(5) << endl;
    cout << "factorial of 8 is " << factorial(8) << endl;
    cout << "factorial of 10 is " << factorial(10) << endl;
    cout << "factorial of 10 is " << factorial(20) << endl;

    cout << endl;
    return 0;
}
