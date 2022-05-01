//
//  main.cpp
//  passingPointers
//
//  Created by Jean Pascal Cyusa Shyaka on 5/1/22.
//

#include <iostream>

using namespace std;

void doubleData(int *int_ptr);
void doubleData(int *int_ptr) {
    *int_ptr *= 2;
}

int main() {
    int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl;
    doubleData(&value);
    cout << "Value: " << value << endl;

    cout << "\n-----------------------" << endl;
    int_ptr = &value;
    doubleData(int_ptr);
    cout << "Value: " << value << endl;

    cout << endl;
    return 0;
}
