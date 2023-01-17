//
//  main.cpp
//  sect-7-challenge
//
//  Created by Jean Pascal Cyusa Shyaka on 3/25/22.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int>vector1; // declare vector1
    vector<int>vector2; // declare vector2
    vector<vector<int>>vector_2d; // declare vector_2d   

    
    // Vector 1

    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "\n\tElements of Vector 1: "
    << vector1.at(0) << ", " << vector1.at(1);
    
    cout << "\nVector 1 contains " << vector1.size() << " elements\n";
    
    // Vector 2

    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "\n\tElements of Vector 2: "
    << vector2.at(0) << ", " << vector2.at(1);
    
    cout << "\nVector 2 contains " << vector2.size() << " elements\n";

    // 2D Vector
        
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\n\tElements of Vector 2d: "
    << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << " and "
    << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1);
    
    cout << endl << "\n\t\t=======================\n";
    
    // change vector1.at(0) to 1000
    
    vector1.at(0) = 1000;
    cout << "\nChanged first element of Vector 1 from 10 to 1000\n";
    
    //Display elements of vector_2d
    
    cout << "\n\tElements of Vector 2d: "
    << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << " and "
    << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1);
    
    // Display elements of vector1
    
    cout << "\n\n\tElements of Vector 1: "
    << vector1.at(0) << ", " << vector1.at(1);
    
    cout << "\nVector 1 contains " << vector1.size() << " elements";
    
    cout << endl << endl;
    
    return  0;

}

