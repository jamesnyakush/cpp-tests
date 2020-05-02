#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//initializing pureText()
void pureText();

int main()
{
    // calling the function
    pureText();
}
void pureText()
{
    char c;

    //reading  myNotes.txt file
    ifstream in("myNotes.txt");

    //looping through the characters in the text file
    while (in.get(c))
    {
        if(c =='K')
            c ='C';
        cout << c;
    }
    in.close();
}
