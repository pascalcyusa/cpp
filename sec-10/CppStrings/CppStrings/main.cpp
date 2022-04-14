//
//  main.cpp
//  CppStrings
//
//  Created by Jean Pascal Cyusa Shyaka on 4/12/22.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
//    // Initializing string
//    string str = "geeksforgeeks is for geeks";
//
//    // Displaying string
//    cout << "The initial string is : ";
//    cout << str << endl;
//
//    cout << "The capacity of the string is: " << str.capacity() << endl;
//
//    // Resizing string using resize()
//    str.resize(13);
//
//    // Displaying string
//    cout << "The string after resize operation is : ";
//    cout << str << endl;
//
//    // Displaying capacity of string
//    cout << "The capacity of string is : ";
//    cout << str.capacity() << endl;
//
//    // Displaying length of the string
//    cout << "The length of the string is :" << str.length()
//        << endl;
//
//    // Decreasing the capacity of string
//    // using shrink_to_fit()
//    str.shrink_to_fit();
//
//    // Displaying string
//    cout << "The new capacity after shrinking is : ";
//    cout << str.capacity() << endl;


    

    string s1;
//    s1 = "Apple";
    
//    for (size_t i {0}; i<s1.length(); ++i) {
//        cout << s1.at(i) << endl;
//    }
    
    
    
//    for (char c: s1)                    // using range-based for loop
//        cout << c << endl;
//
//    cout << s1.substr(0,3) << endl;
//    cout << s1.erase(0,2) << endl;
    
    
    
    
    
    s1 = "The secret word is Pascal";
    string word {};

    cout << "Enter the word to find: "; cin >> word;

    size_t position = s1.find(word);

    if (position!=string::npos) {
        cout << "\nThe word " << word << " is found at position " << position << endl;
    } else {
        cout << "\nThe word " << word << " is not found" << endl;
    }
    
    
    
//    s1 = "In Xanadu did Kubla Kahn a stately pleasure dome decree";
//
//    int n;
//    n = s1.find("Kubla");
//    cout << "Found Kubla at " << n << endl;
//
//    n = s1.find_first_of("spde");
//    cout << "First of spde at " << n << endl;
//
//    n = s1.find_first_not_of("aeiouAEIOU");
//    cout << "First consonant at " << n << endl;
    
    
    return 0;
}



