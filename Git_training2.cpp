#include <iostream>
using namespace std;



int main()
{
    setlocale(0, "");

    const int SIZE = 10;
    int ar[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        ar[i] = rand() % 100;
        cout << ar[i] << ", ";
    }
    cout << "\n\n";
}
