//
//  main.cpp
//  sec-10-challengeAlt
//
//  Created by Jean Pascal Cyusa Shyaka on 4/15/22.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout << "\n\n\t\u26FA SECRET MESSAGE ENCRYPTION PROTOCOL \u26E9\n\n";
    
    string letters {
        " ,abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    };
    
    string key {
        ", onmlkjihgfedcbazyxwvutsrqpBZ0MPASCLVJIW19#@$%*83&^07"
    };
    
    cout << setw(11) << "Alphabet: " << setw(2) << letters.length() << endl
    << setw(11) << "Key: " << setw(2) << key.length() << endl;
    
    string secretMessage {};
    cout << "Write a secret message: ";
    getline(cin, secretMessage);
    
    string encryptedMessage {};
    cout << "\n\tEncrypting message ...\n";
    
    for (char c: secretMessage) {
        size_t position {letters.find(c)};
        if (position == string::npos)
            encryptedMessage += c;
        else {
            char new_char {key.at(position)};
            encryptedMessage += new_char;
        }
    }
    cout << "\nEncrypted message: " << encryptedMessage << endl << endl;
    
    cout << "\n=======================\n";
    
    string decryptedMessage {};
    cout << "\n\tDecrypting message ...\n";
    
    for (char c: encryptedMessage) {
        size_t position = key.find(c);
        if (position == string::npos)
            decryptedMessage += c;
        else {
            char new_char {letters.at(position)};
            decryptedMessage += new_char;
        }
    }
    cout << "\nDecrypted message: " << decryptedMessage << endl << endl;
    
    
    
    return 0;
}



