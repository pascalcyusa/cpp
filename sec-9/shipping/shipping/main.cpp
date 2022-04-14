//
//  main.cpp
//  shipping
//
//  Created by Jean Pascal Cyusa Shyaka on 4/2/22.
//

#include <iostream>

using namespace std;

int main() {
    string name;
    cout << "\n\n\t **** Welcome to the Shipping Cost Calculator ****\n\n"
    << "\t\t\t\t=== Tariff ===\n"
    << "\t1. For packages 100 cubic inches and less, we charge $2.5 per volume\n"
    << "\t2. For packages 101 cubic inches, but less than 500 cubic inches, there is a 10% surcharge\n"
    << "\t3. For packages more than 500 cubic inches, there is a 25% surcharge\n\n";
    
    cout << "Customer's name: "; getline(cin, name);
    
    float length,width,height,volume,total_price {};
    float base_price {2.5}; // unit price per volume
    
    const float tier_price1 {0.1};
    const float tier_price2 {0.25};
    
    const int max_dim {10};
    const int tier_price1_threshold {100};
    const int tier_price2_threshold {500};
    
    
    cout << "Enter the length, width and height of your package in inches: ";
    cin >> length >> width >> height;
    
    volume = length*width*height;
    total_price = base_price*volume;
    
    if (length<max_dim || width<max_dim || height<max_dim) {
        if (volume>tier_price1_threshold) {                     // if voulume is greater than 100
            total_price += total_price*tier_price1;
        }
        else if (volume>tier_price2_threshold) {              // if voulume is greater than 500
            total_price += total_price*tier_price2;
        }
        else
            total_price = base_price*volume;  // all other possibilities
        
        cout << "\n\n Dear " << name << ", the total shipping price of your " << volume << " cubic inches package is $"
        << total_price << endl << endl;

    } else {
        cout << "\n\t*** Sorry! Each dimension must be at least 10 inches or lower" << endl << endl;
    }
    
    
            

}
