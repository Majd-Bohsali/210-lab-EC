// COMSC210 | Lab EC2 | Majd Bohsali
// IDE Used: Visual Studio Code
#include <iostream> 
#include <map>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main() { 
    ifstream inputFile("210-xc2-FA25.txt"); 
    string mTitle;
    int mRating; 
    map<string, vector<int>> movieRatings;  

    // Milestone 1: reads input file and populates the map 
    if(inputFile.is_open()) { 
        while(inputFile >> mTitle >> mRating) { 
            movieRatings[mTitle].push_back(mRating); 
        }
        inputFile.close(); 
    } else {
        cout << "File could not open"; 
    }

    // Milestone 1: print movie titles and ratings 
    for(auto it = movieRatings.begin(); it != movieRatings.end(); it++) { 
        cout << it->first << ": "; 
        for(int rating : it->second) { 
            cout << rating << " "; 
        }
        cout << endl; 
    }

    return 0; 
}