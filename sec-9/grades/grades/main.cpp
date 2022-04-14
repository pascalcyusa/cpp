//
//  main.cpp
//  nested-if
//
//  Created by Jean Pascal Cyusa Shyaka on 4/2/22.
//

#include <iostream>

using namespace std;

int main() {
    int score {};
    char grade {};
    
    cout << "\n\n\tEnter your score in % "; cin >> score;
    
    if (score>=0 && score<=100) {
        if (score>90)
            grade= 'A';
        else if (score>80)
                grade= 'B';
        else if (score>70)
                grade= 'C';
        else if (score>50)
                grade= 'D';
        else if (score>30)
                grade= 'E';
        else if (score>10)
                grade= 'U';
        else
            grade= 'F';
        
        cout << "\n\nYour grade is " << grade << endl;
        
        if (grade=='F')
            cout << "\n\tSorry! You must repeat this class." << endl;
        else if (grade=='A')
            cout << "\n\tCongratulations! You've aced the test" << endl;
        else if (grade=='U')
            cout << "\n\tImprove your grades" << endl;
        else
            cout << "\n\tCongratulations!" << endl;
        
    } else {
        cout << "\n*** Your score is out of range ***" << endl;
    }
}



