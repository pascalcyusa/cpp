//
//  main.cpp
//  if-else
//
//  Created by Jean Pascal Cyusa Shyaka on 3/31/22.
//

#include <iostream>

using namespace std;

int main() {
    
    /*
    int numb;
    cout << "\nInput a number greater than 10: ";
    cin >> numb;

    if (numb>10) {
        cout << numb << " is greater than 10.\n";
    } else {
        cout << numb << " is not greater than 10.\n";
    }
    */
    
    // E-Doctor
    
    string name;
    int age,heart_rate,systolic_pressure,diastolic_pressure;
    
    int const normal_heart_rate {90};
    int const normal_systolic_pressure {120};
    int const normal_diastolic_pressure {80};
    
    cout << "\n\n\t***** Welcome to the E-Doctor program *****\n\n";
    cout << "What's your name "; getline(cin, name);
    cout << "\nHow old are you? "; cin >> age;
    
    cout << "\n\tWe would like to know a few of your medical condition tests results\n";
    cout << "\nWhat's your heart rate (BPM): "; cin >> heart_rate;
    cout << "\nWhat's your systolic blood pressure: "; cin >> systolic_pressure;
    cout << "\nWhat's your diastolic blood pressure: "; cin >> diastolic_pressure;
    
    cout << "\n\t" << name << ". At your age of " << age << ", here are the doctor's recommendations\n";
    
    if (heart_rate>=normal_heart_rate && systolic_pressure<=normal_systolic_pressure && diastolic_pressure<=normal_diastolic_pressure)
        cout << "\nWith a heart rate of " << heart_rate << " BPM; and blood pressures (systolic & diastolic) of " << systolic_pressure << ", " << diastolic_pressure
        << "\n\tYou are in a perfect health condition." << endl << endl;
    else
        cout << "\nWith a heart rate of " << heart_rate << " BPM; and blood pressures (systolic & diastolic) of " << systolic_pressure << ", " << diastolic_pressure
        << "\n\tYou need further medical attention!" << endl << endl;

}
