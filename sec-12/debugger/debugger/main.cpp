//
//  main.cpp
//  debugger
//
//  Created by Jean Pascal Cyusa Shyaka on 5/2/22.
//

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int i {5};
    while (i>0) {
        cout << i << endl;
        i--;
    }
    
    cout << "\n------------------" << endl;
    
    int x{100}, y{200};
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    
    
    cout << endl;
    return 0;
}
