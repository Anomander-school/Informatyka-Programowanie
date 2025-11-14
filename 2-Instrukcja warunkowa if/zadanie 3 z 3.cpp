#include <iostream>
using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    if (liczba % 2 == 0)
        cout << "Liczba jest parzysta." << endl;
    else
        cout << "Liczba jest nieparzysta." << endl;

    if (liczba % 3 == 0)
        cout << "Liczba jest podzielna przez 3." << endl;
    else
        cout << "Liczba nie jest podzielna przez 3." << endl;

    return 0;
}