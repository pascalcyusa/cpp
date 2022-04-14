//
//  main.cpp
//  cpp_Arrays
//
//  Created by Jean Pascal Cyusa Shyaka on 3/24/22.
//

#include <iostream>

using namespace std;

int main() {
    
    // Vowels
    char vowels[] {'a','e','i','o','u'};
    
    cout << "\n\n\t===== VOWELS =====\n\n";
    
    cout << "\nThe first vowel is " << vowels[0] << endl;
    cout << "\nThe second vowel is " << vowels[1] << endl;
    cout << "\nThe third vowel is " << vowels[2] << endl;
    cout << "\nThe fourth vowel is " << vowels[3] << endl;
    cout << "\nThe fifth vowel is " << vowels[4] << endl;
    
    // High temperatures
    
    float hi_temp[] {100,98.3,32.3,30.4,93.3};
    
    cout << "\n\n\t===== TEMPERATURES =====\n\n";
    
    cout << "\nThe first highest temperature is " << hi_temp[0] <<endl;
    cout << "\nThe second highest temperature is " << hi_temp[1] <<endl;
    cout << "\nThe third highest temperature is " << hi_temp[2] <<endl;
    cout << "\nThe fourth highest temperature is " << hi_temp[3] <<endl;
    cout << "\nThe fifth highest temperature is " << hi_temp[4] <<endl;
    
    //Test scores
    
    cout << "\n\n\t===== TEST SCORES =====\n\n";
    
    int test_scores[5] {};
    
    cout << "\nInput the 5 test scores: ";
    
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    cout << "\nThe first test score is " << test_scores[0] <<endl;
    cout << "\nThe second test score  is " << test_scores[1] <<endl;
    cout << "\nThe third test score  is " << test_scores[2] <<endl;
    cout << "\nThe fourth test score  is " << test_scores[3] <<endl;
    cout << "\nThe fifth test score  is " << test_scores[4] <<endl;
    
    cout << "\n***** The name of the array is " << test_scores << " *****\n\n";
}

    
