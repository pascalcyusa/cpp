//
//  main.cpp
//  chapt-6
//
//  Created by Jean Pascal Cyusa Shyaka on 3/22/22.
//

#include <iostream>
#include <climits> // for using sizeof


using namespace std;

int main() {
    // Prints the size of different data types
    
    cout << "\n\t**** SIZE OF INTEGER TYPES *****" << endl;
    
    cout << "The size of int is: " << sizeof(int) << " bytes" << endl;
    cout << "The size of unsigned int is: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "The size of short is: " << sizeof(short) << " bytes" << endl;
    cout << "The size of unsigned short is: " << sizeof(unsigned short) << " bytes" << endl << '\r';
    
    // Minimum & maximum integers that can be stored
    
    cout << "\n\t**** MIN AND MAX *****" << endl;
    
    cout << "Minimum short is: " << SHRT_MIN << " and Maximum short is: " << SHRT_MAX << endl;
    cout << "Minimum int is: " << INT_MIN << " and Maximum int is: " << INT_MAX << endl;
    cout << "Minimum char is: " << CHAR_MIN << " and Maximum char is: " << CHAR_MAX << endl;
    cout << "Minimum long is: " << LONG_MIN << " and Maximum long is: " << LONG_MAX << endl;
    cout << "Minimum long long is: " << LLONG_MIN << " and Maximum long long is: " << LLONG_MAX << endl;
    
    // Using variables
    
    cout << "\n\t**** SIZE OF VARIBLES ****" << endl;
    
    int age {213223};
    cout << "Size of age is: " << sizeof(age) << '\x20' << "Bytes"
    << endl << endl;
    return 0;
}
