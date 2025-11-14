#include <iostream>
using namespace std;

int main() {
    int punkty;
    cout << "Podaj liczbe punktow (0-100): ";
    cin >> punkty;

    if (punkty < 0 || punkty > 100) {
        cout << "Niepoprawna liczba punktow!" << endl;
    } else if (punkty <= 50) {
        cout << "Ocena: niedostateczny" << endl;
    } else if (punkty <= 60) {
        cout << "Ocena: dopuszczajacy" << endl;
    } else if (punkty <= 70) {
        cout << "Ocena: dostateczny" << endl;
    } else if (punkty <= 80) {
        cout << "Ocena: dobry" << endl;
    } else if (punkty <= 90) {
        cout << "Ocena: bardzo dobry" << endl;
    } else {
        cout << "Ocena: celujacy" << endl;
    }

    return 0;
}

