//
//  main.cpp
//  factorial
//
//  Created by Jean Pascal Cyusa Shyaka on 3/23/22.
//

#include <iostream>

using namespace std;

int main() {
  cout << "\n\t==== FACTORIAL CALCULATOR ====\n\n";
  unsigned int numb;
  unsigned long fact{1};

  cout << "Enter a number: ";
  cin >> numb;

  for (int j = numb; j > 0; j--)
    fact *= j;
  cout << "\nThe factorial of " << numb << " is " << fact << endl << endl;
}
