//
//  main.cpp
//  cpp_constants
//
//  Created by Jean Pascal Cyusa Shyaka on 3/24/22.
//

#include <iostream>


using namespace std;

int main() {
    
    // Declare variables and constants
    
    const float TAX_RATE {0.06};
    const int EXPIRY {30};
    const int ROOM_PRICE {30};
    int n,total_room;
    float tax,total;
    
    cout << "\n\n\t--------- 🏬 FRANK'S CARPET CLEANING SERVICE 🧹 ---------\n\n";
    cout << "🦷 At Frank's, our services are affordable 💰\n"
    << "We charge $30 a room, without tax!\n\n";
    
    // Calculate user's price
        
    cout << "🦷 How many rooms do you want cleaned? ";
    cin >> n;
    
    // Formulas
    
    total_room = n*ROOM_PRICE;
    tax = total_room*TAX_RATE;
    total = total_room+tax;
    
    // Print the details
    
    cout << "\n\t 🦷 The cost for cleaning " << n << " rooms, is $" << total_room
    << " plus a $" << tax << " tax," << " which makes $"   << total << " in total" << endl;
    
    cout <<"\n---------- This estimate is valid for " << EXPIRY << " days ----------" << endl;
    cout << endl;
    
}
    
