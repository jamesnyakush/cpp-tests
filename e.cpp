#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    //reading the text file
    ifstream in("data.txt");

    //initializing  odd and even with indexes
    int oddNumber[100], odd = 0;
    int evenNumber[100], even = 0;

    //checking if  file is read
    if (in)
    {
        // looping through the numbers in data.txt
        while (in)
        {
            //initializing the numbers
            int n;
            in >> n;

            //dividing by modulas 2 to get odd and even
            if (n % 2)
                oddNumber[odd++] = n;
            else
                evenNumber[even++] = n;
        }

        in.close();
    }
    else
        cout << "Cannot open this file" << endl;

    // creating file outputs  for both odd and even
    ofstream oddOut("odd.txt"), evenOut("even.txt");

    // looping  the indexes from 0-100  to determine even
    for (int i = 0; i < even; i++)
        evenOut << evenNumber[i] << " ";
    // looping  the indexes from 0-100  to determine even
    for (int i = 0; i < odd; i++)
        oddOut << oddNumber[i] << " ";

    evenOut.close();
    oddOut.close();

    return 0;
}
