//
//  main.cpp
//  casino
//
//  Created by Jean Pascal Cyusa Shyaka on 4/22/22.
//

#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>


using namespace std;

void drawLine(int n, char symbol);
void rules();

void drawLine(int n, char symbol) {
    for(int i{0}; i<n; i++)
        cout << symbol;
    cout << endl;
}

void rules() {
    drawLine(50,'=');
    cout << "\t\tRULES OF THE GAME" << endl;
    drawLine(50,'=');
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of the money you bet\n";
    cout << "\t3. If you bet on a wrong number, you will lose your betting amount\n";
}

int main() {
    string playerName;
    int amount; // hold player's balance amount
    int bettingAmount;
    int guess;
    int dice; // hold computer generated number
    char choice;
 
    srand(static_cast<unsigned int>(time(nullptr))); // "Seed" the random generator

    // GAME STARTS
    
    cout << "\n\n\t\u26FA WELCOME TO PASCAL'S CASINO \u26E9\n\n";
    drawLine(100,'=');
    cout << "\nWhat's your name?\t";
    getline(cin, playerName);
    cout << "\n" << playerName << ", put some cash to play: $"; cin >> amount;
    cout << endl;
    
    do {
        rules();
        cout << "\nYour current balance is $" << amount << endl;
        
        // Get player's betting amount
        do {
            cout << '\n' << playerName <<", enter some money to bet: $";
            cin >> bettingAmount;
            if (bettingAmount > amount)
                cout << "\t\u26D4 Your betting amount is more than your current balance.\tTry again." << endl;
            
        } while (bettingAmount > amount);
        
        // Get player's numbers
        do {
            cout << "\nGuess a number to bet, between 1 and 10: ";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\n\t\u26D4 Number should be between 1 and 10."
                << "\nTry again\n";
            else
                cout << "\n\t\u26D3 Throwing the dice ..." << endl;
            
        } while (guess <= 0 || guess > 10);
        
        
        // Hold the randomly generated integer between 1 and 10
        dice = rand()%10 + 1;
        
        
        // Show the results of the game
        cout << "\nThe winning number was: " << dice << endl;
        
        
        // Player wins or loses
        if (dice == guess) {
            cout << "\n\t\u26C4 Good Luck!! You won $" << bettingAmount * 10 << endl << endl;
            amount += bettingAmount * 10;
        } else {
            cout << "\n\t\u26D4 Bad Luck this time!! You lost $"<< bettingAmount << endl << endl;
            amount -= bettingAmount;
        }
        
        // player's balance
        cout << playerName << ", your remaining balance is $" << amount << endl;
        
        
        // Computer decides if you keep on playing or not
        if (amount == 0) {
            cout << "\n\t\u26F0 Unfortunately, there is no money left to play.";
            break;
        }
        
        
        // Player chooses to continue, or quit.
        cout << "\n\t\u26D4 Do you want to play again (y/n)? ";
        cin >> choice;
        cout << endl;
        
    } while (choice=='y' || choice=='Y');
    
    cout << "\n\nThanks for playing with us." << endl;
    drawLine(100,'=');
    
    
    cout << endl << endl;
    return 0;
}

 
// END OF PROGRAM
