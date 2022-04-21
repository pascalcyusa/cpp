//
//  main.cpp
//  functionParameters
//
//  Created by Jean Pascal Cyusa Shyaka on 4/20/22.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// function prototypes

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear(); // delete all vector elements
}

void print_vector(vector<string> v) {
    for (auto s: v)
        cout << s << " ";
    cout << endl;

}



int main() {
    int num {10};
    int another_num {20};
    
    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "\nAnother num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "Another num after calling pass_by_value1: " << another_num << endl;
    
    string name {"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name before calling pass_by_value2: " << name << endl;
    
    vector<string> stoogies {"Larry", "Moe", "Curly"};
    cout << "\nstoogies before calling pass_by_value3: ";
    print_vector(stoogies);
    pass_by_value3(stoogies);
    cout << "stoogies after calling pass_by_value3: ";
    print_vector(stoogies);

    cout << endl << endl;
    return 0;
}
