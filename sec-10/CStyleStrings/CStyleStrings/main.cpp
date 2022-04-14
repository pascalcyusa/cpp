//
//  main.cpp
//  CStyleStrings
//
//  Created by Jean Pascal Cyusa Shyaka on 4/11/22.
//

#include <iostream>
#include <cctype>    // for character based functions
#include <cstring>   // for c-style string fuctions

using namespace std;

int main() {
//    char first_name[20] {};
//    char last_name[20] {};
    char full_name[50] {};
    
    
//    cout << "\nEnter your first name: "; cin >> first_name;
//    cout << "Enter your last name: "; cin >> last_name;
//
//    cout << "\n\tHello " << first_name << ", your first name has " << strlen(first_name) << " characters;"
//    << " and your last name has " << strlen(last_name) << " characters." << endl;
//
//    strcpy(full_name, first_name);     // copy first name to full name
//    strcat(full_name, " ");            // concatenate (link) full name and a space
//    strcat(full_name, last_name);        // concatenate (link) full name and a space
//
//    cout << "\n\tYour full name is " << full_name << endl;
    
    

    cout << "\nEnter your full name: ";
    cin.getline(full_name, 50);

    cout << "\n\tYour full name is " << full_name << endl << endl;

//    strcpy(temp, full_name);
//    if (strcmp(temp, full_name)==0) {
//        cout << temp << " and " << full_name << " are the same." << endl;
//    } else {
//        cout << temp << " and " << full_name << " are different." << endl;
//    }

    for (size_t i {0}; i<strlen(full_name); ++i) {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }

    cout << "\tName in Uppercase is " << full_name << endl << endl;
    
    
    return 0;
}
