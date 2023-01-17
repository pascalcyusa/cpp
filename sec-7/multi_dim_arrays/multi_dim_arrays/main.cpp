//
//  main.cpp
//  multi_dim_arrays
//
//  Created by Jean Pascal Cyusa Shyaka on 3/24/22.
//

#include <iostream>

using namespace std;

int main() {
    
    // Movie rating

    cout << "\n\n\t===== MOVIE RATINGS =====\n\n";
    
        
    int movie_rating [3][5] {
        {1,2,3,4,3},
        {3,4,5,3,5},
        {0,3,3,4,1}
    };
    
    // Ratings for User 1
    
    cout << "User 1: The movie ratings for: Godzilla, Titanic, Spiderman, Harry Potter, and Transformers: ";
    
    cin >> movie_rating [0][0];
    cin >> movie_rating [0][1];
    cin >> movie_rating [0][2];
    cin >> movie_rating [0][3];
    cin >> movie_rating [0][4];
    
    cout << "\nGodzilla:" << movie_rating [0][0] << endl;
    cout << "\nTitanic:" << movie_rating [0][1] << endl;
    cout << "\nSpiderman:" << movie_rating [0][2] << endl;
    cout << "\nHarry Potter:" << movie_rating [0][3] << endl;
    cout << "\nTransformers:" << movie_rating [0][4] << endl << endl;
    
    // Ratings for User 2
    
    cout << "User 2: The movie ratings for: Godzilla, Titanic, Spiderman, Harry Potter, and Transformers: ";

    cin >> movie_rating [1][0];
    cin >> movie_rating [1][1];
    cin >> movie_rating [1][2];
    cin >> movie_rating [1][3];
    cin >> movie_rating [1][4];
    
    cout << "\nGodzilla:" << movie_rating [1][0] << endl;
    cout << "\nTitanic:" << movie_rating [1][1] << endl;
    cout << "\nSpiderman:" << movie_rating [1][2] << endl;
    cout << "\nHarry Potter:" << movie_rating [1][3] << endl;
    cout << "\nTransformers:" << movie_rating [1][4] << endl << endl;
    
    // Ratings for User 3
    
    cout << "User 3: The movie ratings for: Godzilla, Titanic, Spiderman, Harry Potter, and Transformers: ";

    cin >> movie_rating [2][0];
    cin >> movie_rating [2][1];
    cin >> movie_rating [2][2];
    cin >> movie_rating [2][3];
    cin >> movie_rating [2][4];
    
    cout << "\nGodzilla:" << movie_rating [2][0] << endl;
    cout << "\nTitanic:" << movie_rating [2][1] << endl;
    cout << "\nSpiderman:" << movie_rating [2][2] << endl;
    cout << "\nHarry Potter:" << movie_rating [2][3] << endl;
    cout << "\nTransformers:" << movie_rating [2][4] << endl << endl;
}
