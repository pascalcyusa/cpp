//
//  main.cpp
//  nested-if
//
//  Created by Jean Pascal Cyusa Shyaka on 3/31/22.
//

#include <iostream>

using namespace std;

int main() {
    // compare two scores
    int pascal_score,marius_score,diff1,diff2 {1};
    
    cout << "\nEnter Marius's score "; cin >> marius_score;
    cout << "\nEnter Pascal's score "; cin >> pascal_score;
    
    if (marius_score!=pascal_score) {
        if (marius_score>pascal_score) {
            diff1 = marius_score-pascal_score;
            cout << "\n\nMarius wins with " << diff1 << " more marks." << endl;
        } else {
            diff2 = pascal_score-marius_score;
            cout << "\nPascal wins with " << diff2 << " more marks." << endl;
        }
    } else {
        cout << "\n\nTheir scores are equal! This is a tie.";
    }
    

}
