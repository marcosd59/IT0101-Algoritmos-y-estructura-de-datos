#include <iostream>
using namespace std;

int main()
{
    int m = 5, n = 4;

    cout << "Ingresa numero de filas: ";

    cout << "Ingresa numero de columnas: ";

    cout << endl;

    for (int i = 0; i < m; i++)
    {
        cout << "*";
    }

    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}