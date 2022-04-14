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
    
    cout << "\n\tElements of vector1\n\n"
    << vector1.at(0) << ", " << vector1.at(1);
    
    cout << "\nvector1 contains " << vector1.size() << " elements\n\n";
    
    // Vector 2

    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "\n\tElements of vector2\n\n"
    << vector2.at(0) << ", " << vector2.at(1);
    
    cout << "\nvector2 contains " << vector2.size() << " elements\n\n";

    // 2D Vector
        
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\tElements of vector_2d\n"
    << vector_2d.at(0).at(0) << "," << vector_2d.at(0).at(1) <<'\n'
    << vector_2d.at(1).at(0) << "," << vector_2d.at(1).at(1);
    
    cout << endl << endl;
    
    // change vector1.at(0) to 1000
    
    vector1.at(0) = 1000;
    cout << "Changed vector1.at(0) to 1000\n";
    
    //Display elements of vector_2d
    
    cout << "\tElements of vector_2d\n"
    << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) <<'\n'
    << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1);
    
    cout << endl << endl;
    
    // Display elements of vector1
    
    cout << "\n\tElements of vector1\n\n"
    << vector1.at(0) << ", " << vector1.at(1);
    
    cout << "\nvector1 contains " << vector1.size() << " elements\n\n";

}

