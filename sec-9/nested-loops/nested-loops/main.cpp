//
//  main.cpp
//  nested-loops
//
//  Created by Jean Pascal Cyusa Shyaka on 4/7/22.
//

#include <iostream>
#include <vector>

using namespace std;


int main() {
    
    /*
    cout << "\n\t===== MULTIPLICATION TABLE ====\n\n";
    
    for (int numb1 {1}; numb1<=3; ++numb1) {
        for (int numb2 {1}; numb2<=10; ++numb2) {
            cout << numb1 << " * " << numb2 << " = " << numb1*numb2 << endl;
        }
     cout << "__________________\n";
    }
    */
    
    vector<vector<int>> vector_2d {
        {1,2,3},
        {10,20,30,40},
        {100,200,300,400,500}
    };
    
    for (auto vec : vector_2d) {
        for (auto val : vec) {
            cout << val << " ";
        }
        cout << endl;
    }

}
