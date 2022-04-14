//
//  main.cpp
//  for_vectors
//
//  Created by Jean Pascal Cyusa Shyaka on 4/5/22.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> nums {10,20,30,40,50};
    
    for (unsigned i {0}; i<nums.size(); ++i)
        cout << nums.at(i) << endl;
    
    return 0;
}
