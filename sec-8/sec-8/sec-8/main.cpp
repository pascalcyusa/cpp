//
//  main.cpp
//  sec-8
//
//  Created by Jean Pascal Cyusa Shyaka on 3/28/22.
//

#include <iostream>

using namespace std;

int main() {
    /*
    int counter {10};
    int result {0};
    cout << "\nCounter = " << counter << endl;
    counter += 1;
    cout << "\nCounter = " << counter << endl;
    counter++;
    cout << "\nCounter = " << counter << endl;
    ++counter;
    cout << "\nCounter = " << counter << endl;
    */
    
    /*
    cout << "\nCounter: " << counter << endl;
    result = ++counter;
    cout << "\nCounter: " << counter << endl;
    cout << "\nResult: " << result << endl;
    cout << endl;
    */
    
    /*
    cout << "\nCounter: " << counter << endl;
    result = ++counter + 10;
    cout << "\nCounter: " << counter << endl;
    cout << "\nResult: " << result << endl;
    cout << endl;
    */
    
    /*
    cout << "\nCounter: " << counter << endl;
    result = counter++ + 10;
    cout << "\nCounter: " << counter << endl;
    cout << "\nResult: " << result << endl;
    cout << endl;
    */
    
    /*
    cout << boolalpha;
    int numb1,numb2;
    
    cout << "\nEnter two numbers separated by a space: ";
    cin >> numb1 >> numb2;
    cout << "\n" << numb1 << "=" << numb2 << " " << (numb1==numb2) << endl;
    cout << numb1 << ">" << numb2 << " " << (numb1>numb2) << endl;
    cout << numb1 << "<" << numb2 << " " << (numb1<numb2) << endl;
    cout << numb1 << ">=" << numb2 << " " << (numb1>=numb2) << endl;
    cout << numb1 << "<=" << numb2 << " " << (numb1<=numb2) << endl << endl;
    */
    

    // &&
    cout << boolalpha;
    
    bool hell_yeah {false};
    int numb1;
    cout << "\nWrite a number: ";
    cin >> numb1;
    
    hell_yeah = (numb1>100 && numb1<200);

    cout << "\nIs " << numb1 << " in the range 100-200? " << hell_yeah << endl << endl;
   

}
