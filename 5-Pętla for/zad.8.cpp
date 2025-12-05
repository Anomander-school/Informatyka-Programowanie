#include <iostream>

using namespace std;
 
int main() {

    int szer, wys;

    cout << "Podaj szerokość: ";

    cin >> szer;

    cout << "Podaj wysokość: ";

    cin >> wys;
 
    for (int i = 0; i < wys; i++) {

        // margines (spacje) po lewej

        for (int s = 0; s < i; s++) {

            cout << " ";

        }

        // gwiazdki

        int stars = szer - 2 * i;

        if (stars < 0) stars = 0;

        for (int j = 0; j < stars; j++) {

            cout << "*";

        }

        cout << endl;

    }

    return 0;

}
 