#include <iostream>
using namespace std;

int main()
{
    int szerokosc, wysokosc;
    cout << "Podaj szerokosc prostokata: ";
    cin >> szerokosc;

    cout << "Podaj wysokosc prostokata: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) 
    {
        for (int j = 0; j < szerokosc; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
