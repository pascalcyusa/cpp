//
//  main.cpp
//  scopeExample
//
//  Created by Jean Pascal Cyusa Shyaka on 4/22/22.
//

#include <iostream>

using namespace std;

void localExample();
void globalExample();
void static_localExample();

int num {300};   // global variable declared outside any class or function

void globalExample() {
    cout << "\nGlobal num is " << num << " in globalExample - start" << endl;
    num *= 2;
    cout << "Global num is " << num << " in globalExample - end" << endl;
}


void localExample(int x) {
    int num {1000};     // local to local example
    cout << "\nLocal num is " << num << " in localExample - start" << endl;
    num = x;
    cout << "Local num is " << num << " in localExample - end" << endl;
    // num1 in main is not within scope - so it can't be used here
}

void static_localExample() {
    static int num {5000};
    cout << "\nLocal static num is " << num << " in static_localExample - start" << endl;
    num += 1000;
    cout << "Local static num is " << num << " in static_localExample - end" << endl;
}


int main() {
    int num {100}; // local to main
    int num1 {500}; // local to main

    cout << "\nLocal num is " << num << " in main." << endl;

    {       // creates a new level of scope
        int num {200};
        cout << "\nLocal num is " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out " << num1 << endl;
    }

    cout << "\nLocal num is " << num << " in main" << endl;
    
    localExample(10);
    localExample(20);
    globalExample();
    globalExample();
    static_localExample();
    static_localExample();

    cout << endl << endl;
    return 0;
}


