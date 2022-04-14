//
//  main.cpp
//  chapt-6
//
//  Created by Jean Pascal Cyusa Shyaka on 3/22/22.
//

#include <iostream>
#include <climits>


using namespace std;

int main() {
    // Prints the size of different data types
    
    cout << "**** SIZE OF INTEGER TYPES *****" << endl;
    
    cout << "The size of int is: " << sizeof(int) << '\x20' << "Bytes" << endl;
    cout << "The size of unsigned int is: " << sizeof(unsigned int) << '\x20' << "Bytes" << endl;
    cout << "The size of short is: " << sizeof(short) << '\x20' << "Bytes" << endl;
    cout << "The size of unsigned short is: " << sizeof(unsigned short) << '\x20' << "Bytes" << endl << '\r';
    
    // Minimum integers that can be stored
    
    cout << "**** MIN AND MAX *****" << endl;
    
    cout << "Minimum short is: " << SHRT_MIN << endl;
    cout << "Minimum int is: " << INT_MIN << endl;
    cout << "Minimum char is: " << CHAR_MIN << endl;
    cout << "Minimum long long is: " << LLONG_MIN << endl << '\r';
    
    cout << "Maximum short is: " << SHRT_MAX << endl;
    cout << "Maximum int is: " << INT_MAX << endl;
    cout << "Maximum char is: " << CHAR_MAX << endl;
    cout << "Maximum long long is: " << LLONG_MAX << endl << '\r';
    
    // Using variables
    
    cout << "**** SIZE OF VARIBLES ****" << endl;
    
    int age {213223};
    cout << "Size of integer age is: " << sizeof(age) << '\x20' << "Bytes" << endl << endl;

}
