//
//  main.cpp
//  math
//
//  Created by Jean Pascal Cyusa Shyaka on 4/18/22.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numb;
    cout << "\tEnter a number: "; cin >> numb;
    
    cout << "The square root of " << numb << " is " << sqrt(numb) << endl;
    cout << "The cube root of " << numb << " is " << cbrt(numb) << endl;
    cout << "The sine of " << numb << " is " << sin(numb) << endl;
    cout << "The cosine of " << numb << " is " << cos(numb) << endl;
    cout << "The floor of " << numb << " is " << floor(numb) << endl;
    cout << "The ceil of " << numb << " is " << ceil(numb) << endl;
    cout << "The round of " << numb << " is " << round(numb) << endl << endl;


    
    float power;
    cout << "\tEnter a power to raise: "; cin >> power;
    cout << endl;
    cout << numb << " raised to the power of " << power << " is " << pow(numb, power) << endl << endl;
    

    return 0;
}
