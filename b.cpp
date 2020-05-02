#include <iostream>
using namespace std;


//initializing our change function
void Change(int P[], int N);

int main()
{
    // we add our array
    int y[10] = {100, 43, 20, 56, 32, 91, 80, 40, 45, 21};

    for (int i = 0; i < 10; i++)
    {
        cout << y[i] << "\t";
    }
    cout << endl;

    // call our change function
    Change(y, 10);
}

//Change functiom
void Change(int P[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (P[i] % 10 == 0)
            cout << 10 << "\t";
        else
            cout << 1 << "\t";
    }
}
