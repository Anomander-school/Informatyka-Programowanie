#include <iostream>
using namespace std;

int main() {
    double c;
    char unit;
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> c;
    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> unit;

    switch (unit) {
        case 'K':
        case 'k':
            cout << "Temperatura w Kelwinach: " << (c + 273.15) << endl;
            break;
        case 'F':
        case 'f':
            cout << "Temperatura w Fahrenheita: " << ((c * 9.0/5.0) + 32) << endl;
            break;
        default:
            cout << "Blad: nieprawidlowa opcja jednostki!" << endl;
            break;
    }

    return 0;
}