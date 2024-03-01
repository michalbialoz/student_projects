//Praca od osoby nr 2

#include <iostream>
using namespace std;

int main() {
    double distance, fuel;

    while (true) {
        cout << "Podaj przebytą odległość (km): ";
        if (!(cin >> distance)) {
            cout << "Nieprawidłowe dane wejściowe. Wprowadź liczbę." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (distance <= 0) {
            cout << "Odległość nie może być ujemna ani równa 0. Spróbuj ponownie." << endl;
            continue;
        }

        break;
    }
    while (true) {
        cout << "Podaj ilość zużytego paliwa (l): ";
        if (!(cin >> fuel)) {
            cout << "Nieprawidłowe dane wejściowe. Wprowadź liczbę." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (fuel <= 0) {
            cout << "Ilość paliwa nie może być ujemna ani równa 0. Spróbuj ponownie." << endl;
            continue;
        }

        break;
    }

    double average = (fuel * 100) / distance;

    cout << "Średnie zużycie paliwa na 100 km wynosi: " << average << " l" << endl;

    return 0;
}
