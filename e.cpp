#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream readingfile;
    ofstream outputfile;

    readingfile.open(​ "data.txt"​);
    outputfile.open(​ "odd.txt"​);
    int​ n;
    readingfile >> n;

    while​(readingfile)
    {
        if​(n % 2 != 0)
        {
            cout << ​ "odd"​ << endl;
            outputfile << n << endl;
        }
        readingfile >> n;
    }
    system(​ "pause"​);
    return​ 0;
}
