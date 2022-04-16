//
//  main.cpp
//  sec-10-challenge
//
//  Created by Jean Pascal Cyusa Shyaka on 4/13/22.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout << "\n\n\t\u26FA SECRET MESSAGE ENCRYPTION PROTOCOL \u26E9\n\n";
    
    string alphabet {
        " ,abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    };
    
    string key {
        ", onmlkjihgfedcbazyxwvutsrqpBZ0MPASCLVJIW19#@$%*83&^07"
    };
    
    cout << setw(11) << "Alphabet: " << setw(2) << alphabet.length() << endl
    << setw(11) << "Key: " << setw(2) << key.length() << endl;
    
    string secretMessage {};
    cout << "Enter your secret message: ";
    getline(cin, secretMessage);
    
    string encryptedMessage {};
    cout << "\n\t\u26CF\u26CF Encrypting message ....." << endl;
    
    // Encryption
    
    for (char c: secretMessage) {
        size_t position {alphabet.find(c)};
        if (position != string::npos) {
            char new_char {key.at(position)};
            encryptedMessage += new_char;
        } else
            encryptedMessage += c;
    }
    
    cout << "\nEncrypted message: " << encryptedMessage << endl << endl;
    
    cout << "\n=======================\n";
    
    // Decryption
    
    char choice {};
    string decryptedMessage {};
    
    do {
        cout << "How do you wish to proceed?\n"
        << "\tD - Decrypt message\n"
        << "\tQ - Quit\n"
        << "\nChoose one of the options above to continue\t\t"; cin >> choice;
        
        // Perform actions
        
        if (choice=='d' || choice=='D') {                       // choice = D
            cout << "\n\t\u2693\u2693 Decrypting message ....." << endl;

            for (char c: encryptedMessage) {
                size_t position = key.find(c);
                if (position != string::npos) {
                    char new_char {alphabet.at(position)};
                    decryptedMessage += new_char;
                } else
                    decryptedMessage += c;
            }
            cout << "\nDecrypted message: " << decryptedMessage << endl << endl;
        }
        
        else if (choice=='q' || choice=='Q') {                      // choice = Q
            cout << "\n\u26D1 We respect your privacy. Thanks" << endl << endl;
        }
        
        else {
            cout << "\n\u26D4 Invalid character. Try again." << endl << endl;
        }
        
    } while (choice!='q' && choice!='Q');
    
    
    return 0;
}


