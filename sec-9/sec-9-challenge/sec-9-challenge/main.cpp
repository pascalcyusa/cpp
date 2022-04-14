//
//  main.cpp
//  program
//
//  Created by Jean Pascal Cyusa Shyaka on 4/7/22.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers {};
    char choice {};
    
    cout << "\n\n\t\u08B8 Welcome to the Super C++ Program \u08B8\n\n";
        
    do {
        // Get input from the user
        cout << "\t\tCHOICES\n"
        << "\tP - Print numbers\n"
        << "\tA - Add a number\n"
        << "\tM - Display the mean of the numbers\n"
        << "\tS - Display the smallest number\n"
        << "\tL - Display the largest number\n"
        << "\tQ - Quit\n"
        << "Choose one of the options above to continue\t\t"; cin >> choice;
        
        // Perform actions
        
        if (choice=='p' || choice=='P') {                            // choice = P
            if (numbers.size()==0) {
                cout << "[ ] - " << "The list is empty.\n\n";
            } else {
                cout << "\n\nYour list: [ ";
                for (auto num: numbers)
                    cout << num << " ";
                cout << "]" << endl << endl;
            }
        }
        
        else if (choice=='a' || choice=='A') {                       // choice = A
            int numb {};
            cout << "\nAdd a number to the list: "; cin >> numb;
            numbers.push_back(numb);
            cout << numb << " added to the list.\n\n";
        }
        
        else if (choice=='m' || choice=='M') {                      // choice = M
            if (numbers.size()<2) {
                cout << "\n\n\u26D4 You must have at leat two numbers to calculate the mean\n\n";
            } else {
                int total {};
                for (auto num: numbers)
                    total += num;
                cout << "\n\n\u2A1D The mean is " << static_cast<float>(total)/numbers.size()
                << endl << endl;
            }
        }
        
        else if (choice=='s' || choice=='S') {                      // choice = S
            if (numbers.size()==0) {
                cout << "\n\n\u26D4 The list is empty. Unable to determine the smallest number\n\n";
            } else {
                int smallest = numbers.at(0);
                for (auto num: numbers)
                    if (num < smallest)
                        smallest = num;
                cout << "\n\n\u2B17 The smallest number is " << smallest << endl << endl;
            }
        }
        
        else if (choice=='l' || choice=='L') {                      // choice = L
            if (numbers.size()==0) {
                cout << "\n\n\u26D4 The list is empty. Unable to determine the largest number\n\n";
            } else {
                int largest = numbers.at(0);
                for (auto num: numbers)
                    if (num > largest)
                        largest = num;
                cout << "\n\n\u2B17 The largest number is " << largest << endl << endl;
            }
        }
        
        else if (choice=='q' || choice=='Q') {                      // choice = Q
            cout << "\n\u2665 Sorry to see you go. Bye." << endl << endl;
        }
        
        else {
            cout << "\n\u26D4 Unknown selection. Try again." << endl << endl;
        }
        
    } while (choice!='q' && choice!='Q');                         // end of do-while

    
    return 0;
}

