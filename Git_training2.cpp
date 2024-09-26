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

    // Для ветки array_add

    int x;
    cin >> x;
    int* dyn = new int[x];

    for (int i = 0; i < x; i++)
    {
        dyn[i] = rand() % 100;
        cout << dyn[i] << ", ";
    }
    cout << "\n\n";

    //добавим строку которую потом отменим а потом отменим отмену))
    cout << "Строка для отмены";
}
