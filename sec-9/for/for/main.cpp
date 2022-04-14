//
//  main.cpp
//  for
//
//  Created by Jean Pascal Cyusa Shyaka on 4/5/22.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    for (int numb {1}; numb<=100; ++numb) {
        cout <<setw(3) << numb;
        if (numb%10 == 0)
            cout << endl;
        else
            cout << " ";
    }
}
