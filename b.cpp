#include <iostream>
using namespace std;

void Change(int p[], int N);

int main()
{
    int y[10] = {100, 43, 20, 56, 32, 91, 80, 40, 45, 21};

    for (int i = 0; i < 10; i++)
    {
        cout << y[i] << "\t";
    }
    cout << endl;

    Change(y, 10);
}

void Change(int p[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (p[i] % 10 == 0)
            cout << 10 << "\t";
        else
            cout << 1 << "\t";
    }
}
