//
//  main.cpp
//  rand
//
//  Created by Jean Pascal Cyusa Shyaka on 4/18/22.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int randomNumber {};
    size_t count {10};
    int min {1};
    int max {6};
    
    cout << "RAND_MAX on my system is " << RAND_MAX << endl;
    srand(time(nullptr));
    
    for (size_t i {1}; i<=count; i++) {
        randomNumber = rand()%max + min;
        cout << randomNumber << endl;
    }
    
    return 0;
}
