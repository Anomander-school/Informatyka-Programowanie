#include <iostream>
using namespace std;
 
int main() {
    int wiersze, kolumny;
    cout << "Podaj liczbę wierszy: ";
    cin >> wiersze;
    cout << "Podaj liczbę kolumn: ";
    cin >> kolumny;
 
    int currentOdd = 1;
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << currentOdd << "\t";
            currentOdd += 2;
        }
        cout << endl;
    }
    return 0;
}