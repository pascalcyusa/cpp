//
//  main.cpp
//  arraysAndPointers
//
//  Created by Jean Pascal Cyusa Shyaka on 4/28/22.
//

#include <iostream>

using namespace std;

int main() {
    int scores[] {100,95,80};
    cout << "value of scores is " << scores << endl;
    
    int *score_ptr {scores};
    cout << "value of score_ptr is " << score_ptr << endl;

    
    cout << "\nArray subscript notation -------------" << endl;
    cout << scores[0] << endl
    << scores[1] << endl
    << scores[2] << endl;
    
    cout << "\nPointer subscript notation -------------" << endl;
    cout << score_ptr[0] << endl
    << score_ptr[1] << endl
    << score_ptr[2] << endl;
    
    cout << "\nPointer offset notation -------------" << endl;
    cout << *score_ptr << endl
    << *(score_ptr+1) << endl
    << *(score_ptr+2) << endl;
    
    cout << "\nArray offset notation -------------" << endl;
    cout << *scores << endl
    << *(scores+1) << endl
    << *(scores+2) << endl;
    
    cout << endl;
    return 0;
}
    
