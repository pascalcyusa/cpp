//
//  main.cpp
//  simplePointers
//
//  Created by Jean Pascal Cyusa Shyaka on 4/25/22.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int num {10};
    cout << "\n\n🧲 value of num is " << num << endl;
    cout << "🧲 size of of num is " << sizeof(num) << endl;
    cout << "🧲 address of num is " << &num << endl;
    
    int *p;
    cout << "\n🧲 value of p is " << p << endl;
    cout << "🧲 address of p is " << &p << endl;
    cout << "🧲 size of of p is " << sizeof(p) << endl;
    
    p = nullptr;
    cout << "\n🧲 value of p is " << p << endl;
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout << "\n🧲 size of of p1 is " << sizeof(p1) << "\tvalue of p1 is " << p1 << endl;
    cout << "🧲 size of of p2 is " << sizeof(p2) << "\tvalue of p2 is " << p1 << endl;
    cout << "🧲 size of of p3 is " << sizeof(p3) << "\tvalue of p3 is " << p1 << endl;
    cout << "🧲 size of of p4 is " << sizeof(p4) << "\tvalue of p4 is " << p1 << endl;
    cout << "🧲 size of of p5 is " << sizeof(p5) << "\tvalue of p5 is " << p1 << endl;
    
    int score {10};
//    double high_temp {100.7};
    
    int *score_ptr {nullptr};
    
    score_ptr = &score;
    
    cout << "\n🧲 value of score is " << score << endl;
    cout << "🧲 adress of score is " << &score << endl;
    cout << "🧲 value of score_ptr is " << score_ptr << endl;
  
    // ==> error
//    score_ptr = &high_temp;
    
    cout << endl;
    return 0;
}
