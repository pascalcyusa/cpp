//
//  main.cpp
//  sec-11-challenge
//
//  Created by Jean Pascal Cyusa Shyaka on 4/24/22.
//

#include <iostream>
#include <vector>

using namespace std;

// prototypes for displaying the menu and getting User selection

void display_menu();
char get_selection();

// menu handling function prototypes

void handle_display(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);
void handle_find(const vector<int> &v);
void handle_quit();
void handle_unknown();


// prototypes for functions that work with the list
// to display list, calculate mean, etc...

void display_list(const vector<int> &v);
double calculate_mean(const vector<int> &v);
int get_smallest(const vector<int> &v);
int get_largest(const vector<int> &v);
bool find(const vector<int> &v, int target);

void draw_lines(int n, char l);             // for drawing lines


// main function

int main() {
    draw_lines(100, '=');
    cout << "\n\n\t\u2615 Juggle Around Program \u26F1\n\n";
    
    vector<int> numbers;
    char selection {};
    
    do {
        display_menu();
        selection = get_selection();
        
        switch (selection) {
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
                
            default:
                handle_unknown();
        }
        
    } while (selection !='Q');
    
    
    cout << endl;
    return 0;
}

// display_menu

void display_menu() {
    draw_lines(50, '=');
    cout << "\t\tOPTIONS MENU\n";
    draw_lines(50, '=');
    cout << "\tP - Print numbers\n"
    << "\tA - Add a number\n"
    << "\tM - Display the mean of the numbers\n"
    << "\tS - Display the smallest number\n"
    << "\tL - Display the largest number\n"
    << "\tF - Find a number\n"
    << "\tQ - Quit\n"
    << "\nChoose one of the options above to continue:\t";
}

// getChoice

char get_selection() {
    char selection;
    cin >> selection;
    return toupper(selection);
}

// handle_display

void handle_display(const vector<int> &v) {
    if (v.size()==0)
        cout << "\n[ ] - " << "The list is empty." << endl << endl;
    else
        display_list(v);
}

// handle_add

void handle_add(vector<int> &v) {
    int num_to_add {};
    cout << "\nAdd a number to the list: ";
    cin >> num_to_add;
    v.push_back(num_to_add);
    cout << num_to_add << " added to the list." << endl << endl;
}

// handle_mean

void handle_mean(const vector<int> &v) {
    if (v.size()==0)
        cout << "\n\n\u26D4 Unable to calculate the mean - the list is empty." << endl << endl;
    else
        cout << "\n\n\u2A1D The mean is " << calculate_mean(v) << endl << endl;
}

// handle_smallest

void handle_smallest(const vector<int> &v) {
        if (v.size()==0)
            cout << "\n\n\u26D4 The list is empty. Unable to determine the smallest number"
            << endl << endl;
        else
            cout << "\n\n\u2B17 The smallest number is " << get_smallest(v) << endl << endl;
}

// handle_largest

void handle_largest(const vector<int> &v) {
        if (v.size()==0)
            cout << "\n\n\u26D4 The list is empty. Unable to determine the largest number."
            << endl << endl;
        else
            cout << "\n\n\u2B17 The largest number is " << get_largest(v) << endl << endl;
}

// find

void handle_find(const vector<int> &v) {
    int target;
    cout << "\n\nEnter the number to find: "; cin >> target;
    if ( find(v, target))
        cout << target << " was found." << endl << endl;
    else
        cout << target << " was not found." << endl << endl;
}


// handle_unknown

void handle_unknown() {
    cout << "\n\u26D4 Unknown selection. Try again." << endl << endl;
}


// handle_quit

void handle_quit() {
    cout << "\n\u26A1\u26A1 Sorry to see you go. Bye." << endl << endl;
}

// displayList

void display_list(const vector<int> &v) {
    cout << "\n[ ";
    for (auto num: v)
        cout << num << " ";
    cout << "]" << endl << endl;
}


// calculate_mean

double calculate_mean(const vector<int> &v) {
    int total {};
    for (auto num: v)
        total += num;
    return static_cast<double>(total)/v.size();
}


// get_smallest

int get_smallest(const vector<int> &v) {
    int smallest = v.at(0);
    for (auto num: v)
        if (num < smallest)
            smallest = num;
    return smallest;
}


// get_largest

int get_largest(const vector<int> &v) {
    int largest = v.at(0);
    for (auto num: v)
        if (num > largest)
            largest = num;
    return largest;
}

// find


bool find(const vector<int> &v, int target) {
    for (auto num: v)
        if (num == target)
            return true;
    return false;
}

// draw_lines

void draw_lines(int n, char l) {
    for (int i{1}; i<n; i++)
        cout << l;
    cout << endl;
}



// end
