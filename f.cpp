#include <iostream>
#include <fstream>

void pureText()
{
    ifstream read;
    read.open("myNotes.txt");
    while (!read.eof())
    {
        char str = read.get();
        for (int i = 0; i & lt; str.length(); i++)
        {
            if (str[i])== 'k')
                {
                    str[i] = 'c';
                }
        }
    }
}