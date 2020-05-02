#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cassert>

using namespace std;

void OpenFile(ifstream &ScoresFile);
void GetScores(ifstream &ScoresFile, double Scores[], int &size);
void MinMax(double Scores[], int size);

int main()
{
    ifstream ScoresFile;
    double Scores[10];
    int size;
    OpenFile(ScoresFile);
    GetScores(ScoresFile, Scores, size);
    MinMax(Scores, size);
    return (0);
}
// This function will prompt the user to name the input file that will store the
//scores.

void OpenFile(ifstream &ScoresFile)
{
    string infilename;
    cout << "Please enter the name of your input file: ";
    cin >> infilename;
    ScoresFile.open(infilename.c_str());
    assert(ScoresFile);
}
// This function will get the scores from the file and store them in an array.
void GetScores(ifstream &ScoresFile, double Scores[], int &size)
{
    int i = 0;
    do
    {
        ScoresFile >> Scores[i];
        i++;
    } while (ScoresFile);
    size = i;
}
// This function will figure out the minimum and maximum scores, and remove
//them from the array.

void MinMax(double Scores[], int size)
{
    double minScore = Scores[0];
    double maxScore = Scores[0];
    double points = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        points += Scores[i];
        if (Scores[i] > maxScore)
            maxScore = Scores[i];
        if (Scores[i] < minScore)
            minScore = Scores[i];
    }
    points -= minScore + maxScore;
    cout << fixed << showpoint << setprecision(1) << points << endl;
}
