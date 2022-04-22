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

void randomNumber1();
void randomNumber2();

void randomNumber1() {
    int randomNumber {};
    size_t count {6};
    int min {1};
    int max {49};

    cout << "RAND_MAX on my system is " << RAND_MAX << endl;

    srand(static_cast<unsigned int>(time(nullptr)));  // seed random number generator

    for (size_t i {1}; i<=count; i++) {
        randomNumber = rand()%max + min;
        cout << randomNumber << endl;
    }
}

void randomNumber2() {
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int count=1; count <= 100; ++count) {
        cout << rand() << "\t";

        // display 5 random numbers per row
        if (count % 5 == 0)
            cout << "\n";
        }
}


int main() {
    cout << "\n\n\t\u26FA INZOZI LOTTO RANDOM NUMBERS GENERATOR \u26E9\n\n";
    
    randomNumber1();
    cout << "\n\n------------------------- OTROS -----------------------\n\n";
    randomNumber2();


    cout << endl << endl;
    return 0;
}


