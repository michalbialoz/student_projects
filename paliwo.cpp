//Praca od osoby nr 2

#include <iostream>
using namespace std;

int main() {
    double distance, fuel;

    while (true) {
        cout << "Podaj przebytą odległość (km): ";
        cin >> distance;

        if (distance <= 0) {
            cout << "Odległość nie może być ujemna ani równa 0. Spróbuj ponownie." << endl;
            continue;
        }
        break;
    }
    while (true){
        cout << "Podaj ilość zużytego paliwa (l): ";
        cin >> fuel;

        if (fuel < 0) {
            cout << "Ilość paliwa nie może być ujemna. Spróbuj ponownie." << endl;
            continue;
        }
        if (fuel == 0) {
            cout << "Brak paliwa. Spróbuj ponownie." << endl;
            continue;
        }
        break;
    }

    double average = (fuel * 100) / distance;

    cout << "Średnie zużycie paliwa na 100 km wynosi: " << average << " l" << endl;

    return 0;
}
