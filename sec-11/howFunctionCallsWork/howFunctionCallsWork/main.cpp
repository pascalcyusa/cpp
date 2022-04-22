//
//  main.cpp
//  howFunctionCallsWork
//
//  Created by Jean Pascal Cyusa Shyaka on 4/22/22.
//

#include <iostream>

using namespace std;

void funct2(int &x, int y, int z) {
    x += y+z;
}

int funct1(int a, int b) {
    int result {};
    result = a+b;
    funct2(result, a, b);
    return result;
}

int main() {
    int x {10};
    int y {20};
    int z {};
    z = funct1(x, y);
    cout << z << endl;
    
    
    
    
    cout << endl;
    return 0;
}

