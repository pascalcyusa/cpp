//
//  main.cpp
//  cpp_vectors
//
//  Created by Jean Pascal Cyusa Shyaka on 3/24/22.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    /*
    vector<int> test_scores(3, 100); //3 elements initialized to 100
    */
    
    /*
    
    cout << "\n\n\t=== VECTORS: TEST SCORES ===\n\n";
    
    vector<int> test_scores(3);
    
    cout << "Enter Math score: ";
    cin >> test_scores.at(0);
    
    cout << "\nEnter Phy score: ";
    cin >> test_scores.at(1);
    
    cout << "\nEnter Chem score: ";
    cin >> test_scores.at(2);
    
    cout << "\n\t== Scores ==\n\n"
    << "The Math score is: " << test_scores.at(0)
    << "\nThe Phy score is: " << test_scores.at(1)
    << "\nThe Chem score is: " << test_scores.at(2) << '\n';
    
    test_scores.at(0) = 80; Change the first score to 35
    cout << "\nThe new Math score is " << test_scores.at(0) << '\n';
    
     Test score to add to the vector
    
    int Bio {0};
    cout << "\nAdd the Bio score: ";
    cin >> Bio;  Add the score
    test_scores.push_back(Bio);
    
    cout << "\n\t== Updated scores ==\n\n"
    << "The Math score is: " << test_scores.at(0)
    << "\nThe Phy score is: " << test_scores.at(1)
    << "\nThe Chem score is: " << test_scores.at(2)
    << "\nThe Bio score is: " << test_scores.at(3) << '\n';
    
    */
    
    // 2-Dimensional Vectors
    
    vector<vector<int>> movie_rating {
        {0,0,0}
    };
    
    cout << "\n\n\t=== Ratings given by Pascal ===\n\n";
    cout << "My ratings for The Life of Pi, Avengers, and Thor are: ";
    cin >> movie_rating.at(0).at(0)
    >> movie_rating.at(0).at(1)
    >> movie_rating.at(0).at(2);
    
    cout << "\n\n\tRatings\n"
    << "\nThe Life of Pi: " << movie_rating.at(0).at(0)
    << "\nAvengers: " << movie_rating.at(0).at(1)
    << "\nThor: " << movie_rating.at(0).at(2) << endl << endl;
}
