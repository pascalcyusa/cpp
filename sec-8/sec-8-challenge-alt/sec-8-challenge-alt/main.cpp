//
//  main.cpp
//  sec-8-challenge
//
//  Created by Jean Pascal Cyusa Shyaka on 3/30/22.
//

#include <iostream>

using namespace std;

int main() {
    int cents,dollar,quarter,dime,nickel,penny {0};
    int rem1,rem2,rem3,rem4 {1};
    
    cout << "\n\n\t ===== CONVERT YOUR CENTS =====\n\n";
    
    cout << "\tBelow is a list of change rates.\n\n"
    << " 1 dollar = 100 cents\n"
    << " 1 quarter = 25 cents\n"
    << " 1 dime = 10 cents\n"
    << " 1 nickel = 5 cents\n"
    << " 1 penny = 1 cent\n\n";
    
    cout << "Enter the number of cents you have: "; cin >> cents;
    
    dollar = cents/100;
    rem1 = cents%100;
    quarter = rem1/25;
    rem2 = rem1%25;
    dime = rem2/10;
    rem3 = rem2%10;
    nickel = rem3/5;
    rem4 = rem3%5;
    penny = rem4/1;
    
    cout << "\n\tYour " << cents << " cents are equivalent to: " << dollar << " dollars, "
    << quarter << " quarters, " << dime << " dimes, " << nickel << " nickels, and " << penny << " pennies. \n\n";
}
    
