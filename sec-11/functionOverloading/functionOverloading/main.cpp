//
//  main.cpp
//  functionOverloading
//
//  Created by Jean Pascal Cyusa Shyaka on 4/21/22.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// function prototypes

void print(int);
void print(double = 12.34);
void print(string);
void print(string, string);
void print(vector<string>);


void print(int num) {
    cout << "Printing integer: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
    cout << "Printing 2 string: " << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: " << '\t';
    for (auto s: v)
        cout << s + " ";
    cout << endl;
}



int main() {
    print();
    print(100);
    print('A'); // characters are promoted to integers
    print(123.45);
    print(123.2F);
    print("C-Style string"); // converted to a C++ string
    
    string s {"C++ string"};
    print(s); // C++ string
    
    print("C-Style string", s);
    
    vector<string> threeStoogies {"Larry", "Moe", "Curly"};
    print(threeStoogies);
    
    
    
    
    cout << endl;
    return 0;
}


