//
//  main.cpp
//  sec-8-challenge
//
//  Created by Jean Pascal Cyusa Shyaka on 3/30/22.
//

#include <iostream>

using namespace std;

int main() {

    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int cents,dollar,quarter,dime,nickel,penny,balance {0};
    
    cout << "\n\n\t ===== CONVERT YOUR CENTS =====\n\n";
    
    cout << "\tBelow is a list of change rates.\n\n"
    << " 1 dollar = 100 cents\n"
    << " 1 quarter = 25 cents\n"
    << " 1 dime = 10 cents\n"
    << " 1 nickel = 5 cents\n"
    << " 1 penny = 1 cent\n\n";
    
    cout << "Enter the number of cents you have: "; cin >> cents;
    
    dollar = cents/dollar_value;
    balance = cents%dollar_value;
    quarter = balance/quarter_value;
    balance %= quarter_value;
    dime = balance/dime_value;
    balance %= dime_value;
    nickel = balance/nickel_value;
    balance %= nickel_value;
    penny = balance;
    
    cout << "\n\tYour " << cents << " cents are equivalent to: " << dollar << " dollars, "
    << quarter << " quarters, " << dime << " dimes, " << nickel << " nickels, and " << penny << " pennies. \n\n";

    return 0;
}
    

