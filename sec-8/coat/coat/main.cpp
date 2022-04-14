//
//  main.cpp
//  coat
//
//  Created by Jean Pascal Cyusa Shyaka on 3/30/22.
//

#include <iostream>

using namespace std;

int main() {
    cout << boolalpha;
    
    bool decisionAND,decisionOR {false};
    float temp {};
    int hum {};
    
    const int coat_temp {12}; // Temperature below this value requires a coat
    const int coat_hum {80}; // Humidity above this value requires a coat
    
    cout << "\n\t=== Do you need to wear a coat? ===\n\n";
    cout << "Today's temperature and humidity (in C and %)"
    << "\n\nTemperature: "; cin >> temp;
    cout << "Humidity: "; cin >> hum;
    
    decisionAND = (temp<=coat_temp && hum>=coat_hum); // Using AND
    decisionOR = (temp<=coat_temp || hum>=coat_hum); // Using OR
    
    cout << "\nUsing AND/ At a temperature of " << temp << "C and humidity of " << hum << "%, you need to wear a coat: "
    << decisionAND << endl;
    
    cout << "\nUsing OR/ At a temperature of " << temp << "C and humidity of " << hum << "%, you need to wear a coat: "
    << decisionOR << endl << endl;

}
