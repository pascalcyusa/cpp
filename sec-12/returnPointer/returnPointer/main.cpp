//
//  main.cpp
//  returnPointer
//
//  Created by Jean Pascal Cyusa Shyaka on 5/1/22.
//

#include <iostream>

using namespace std;

int *createArray(size_t size, int initValue = 0) {
    int *newStorage {nullptr};
    newStorage = new int[size];
    for (size_t i{0}; i<size; i++)
        *(newStorage + i) = initValue;
    return newStorage;
}

void display(const int *const array, size_t size) {
    for (size_t i{0}; i<size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main() {
    int *myArray{nullptr};
    size_t size;
    int initValue {};
    
    cout << "How many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would like them initialized to? ";
    cin >> initValue;
    
    myArray = createArray(size, initValue);
    cout << "\n----------------------------" << endl;
    
    display(myArray, size);
    delete[] myArray;
    
    cout << endl;
    return 0;
}
