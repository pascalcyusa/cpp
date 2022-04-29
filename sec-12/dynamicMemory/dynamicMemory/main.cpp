//
//  main.cpp
//  dynamicMemory
//
//  Created by Jean Pascal Cyusa Shyaka on 4/27/22.
//

#include <iostream>

using namespace std;

int main() {
    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;
    
    size_t size {};
    double *temp_ptr {nullptr};
    
    cout << "How many temperature do you need? ";
    cin >> size;

    temp_ptr = new double [size];
    cout << temp_ptr << endl;
    delete [] temp_ptr;
    
    cout << endl;
    return 0;
}
