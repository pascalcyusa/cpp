//
//  main.cpp
//  midpointRule
//
//  Created by Jean Pascal Cyusa Shyaka on 5/9/22.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "\n\n\t⚙️ MIDPOINT RULE 🧮\n\n";
    
    unsigned int n;
    double a,b;
    cout << "Initial Values \n\n"
    << "\tEnter the value of a: "; cin >> a;
    cout << "\tEnter the value of b: "; cin >> b;
    cout << "\tEnter the value of n: "; cin >> n;
    
    double deltaX = (b-a)/n;
    double c1 = a + (deltaX/2);
    double fc1 = sqrt(c1*c1+1);
    
    cout << "\nfc1 = " << fc1;

    cout << endl << endl;
    return 0;
}
