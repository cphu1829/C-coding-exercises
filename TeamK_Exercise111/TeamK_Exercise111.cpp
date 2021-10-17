// TeamK_Exercise111.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct MovieData
{
    string Title;
    string Director;
    int Year;
    int ReleasedRunningTime;
    double productioncosts;
    double FYrevenues;
};

void PrintMovieData(MovieData Movie) {
    cout << fixed << setprecision(2) << left;
    cout << setw(25) << "Title:" << Movie.Title << endl;
    cout << setw(25) << "Director:" << Movie.Director << endl;
    cout << setw(25) << "Released:" << Movie.Year << endl;
    cout << setw(25) << "Running Time:" << Movie.ReleasedRunningTime << " minutes" << endl;
    cout << setw(25) << "Production cost:" << "$" << Movie.productioncosts << endl;
    cout << setw(25) << "First year revenues:" << "$" << Movie.FYrevenues << endl;

    double FYprofit = Movie.FYrevenues - Movie.productioncosts;
    if (FYprofit > 0) {
        cout << setw(25) << "First year profit:" << "$" << FYprofit << endl << endl;
    }
    else {
        cout << setw(25) << "First year loss:" << "$" << FYprofit << endl << endl;
    }
    

}


int main()
{
    MovieData Movie1 = { "War of the Worlds", "Byron Haskin",1953,88 ,15000000.00,28000000.00 };
    MovieData Movie2 = { "War of the Worlds", "Stephen Spielberg",2005,118 ,22000000.00,14000000.00 };

    PrintMovieData(Movie1);
    PrintMovieData(Movie2);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
