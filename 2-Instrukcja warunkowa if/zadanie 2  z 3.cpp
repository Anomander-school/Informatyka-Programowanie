#include <iostream>
using namespace std;

int main() {
    double masa, wzrost, bmi;

    cout << "Podaj mase ciala (kg): ";
    cin >> masa;
    cout << "Podaj wzrost (m): ";
    cin >> wzrost;

    if (wzrost <= 0) {
        cout << "Wzrost musi byc wiekszy od 0!" << endl;
        return 0;
    }

    bmi = masa / (wzrost * wzrost);
    cout << "Twoje BMI wynosi: " << bmi << endl;

    if (bmi < 18.5)
        cout << "Niedowaga" << endl;
    else if (bmi < 25)
        cout << "Twój stan w normie" << endl;
    else if (bmi < 30)
        cout << "Nadwaga" << endl;
    else
        cout << "Otylosc" << endl;

    return 0;
}
