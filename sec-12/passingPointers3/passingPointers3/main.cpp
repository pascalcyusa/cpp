//
//  main.cpp
//  passingPointers3
//
//  Created by Jean Pascal Cyusa Shyaka on 5/1/22.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(const vector<string> *v) {
    // (*v).at(0) = "Funny";
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
}

void display(int *array, int sentinel) {
    while (*array!=sentinel)
        cout << *array++ << " ";
    cout << endl;
}

int main() {
    cout << "\n-----------------------" << endl;
    vector<string> stooges {"Larry","Moe","Curly"};
    display(&stooges);
    
    cout << "\n-----------------------" << endl;
    int scores[] {100,98,97,78,85,-1};
    display(scores, -1);
    
    
    cout << endl;
    return 0;
}
