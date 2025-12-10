// COMSC210 | Lab EC2 | Majd Bohsali
// IDE Used: Visual Studio Code
#include <iostream> 
#include <map>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
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

    // Milestone 1 & 2: print movie titles, ratings, and averge rating
    // Milestone 3: Finds highest average rating
    double highestAvgRating = 0.0;
    vector<string> highestMovies; 
    for(auto it = movieRatings.begin(); it != movieRatings.end(); it++) { 
        cout << it->first << ": ";
        int total = 0;  
        for(int rating : it->second) { 
            cout << rating << " "; 
            total += rating; 
        }
        double movieAvg = (double) total / (it->second.size());
        cout << endl << "    Average Rating: " << setprecision(3) << movieAvg << endl << endl; 

        if(movieAvg > highestAvgRating) { 
            
        }
    }

    // Milestone 2: Prints total number of movies
    cout << "Total number of Movies: " << movieRatings.size() << endl;
    return 0; 
}  