//
//  main.cpp
//  passingPointers2
//
//  Created by Jean Pascal Cyusa Shyaka on 5/1/22.
//

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int x{100}, y{200};
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    
    swap(&x, &y);
    
    cout << "\n-----------------------" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    
    cout << endl;
    return 0;
}
