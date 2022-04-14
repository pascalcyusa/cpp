//
//  main.cpp
//  range_based_for
//
//  Created by Jean Pascal Cyusa Shyaka on 4/5/22.
//

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    /*
    int scores[] {1,2,3,4,5};
    
    for (auto score : scores)
        cout << score << endl;
     */
    
    vector<float> temps {34.5,90.4,12.5,75.0};
    
    float average_temp,total {};
    
    for (auto temp : temps)
        total += temp;
    
    if (temps.size()!=0)
        average_temp = total/temps.size();
    
    cout << fixed << setprecision(3);
    cout << "\nAverage temperature = " << average_temp << endl;
    
}
