#include "functions.h"

using namespace std;

int main() {
    double distance;
    double fuel;

    while (true) {
        distance = getDistance();
        if (distance > 0) {
            break;
        }
        if (distance == -1) {
            cout << "Nieprawidłowe dane wejściowe. Nie używaj przecinka" << endl;
        }
        if (distance == -2) {
            cout << "Nieprawidłowe dane wejściowe. Wprowadź liczbę" << endl;
        }
        if (distance == -3) {
            cout << "Odległość nie może być ujemna ani równa 0. Spróbuj ponownie" << endl;
        }

    }

    while (true) {
        fuel = getFuel();
        if (fuel > 0) {
            break;
        }
        if (fuel == -1) {
            cout << "Nieprawidłowe dane wejściowe. Nie używaj przecinka" << endl;
        }
        if (fuel == -2) {
            cout << "Nieprawidłowe dane wejściowe. Wprowadź liczbę" << endl;
        }
        if (fuel == -3) {
            cout << "Ilość paliwa nie może być ujemna ani równa 0. Spróbuj ponownie" << endl;
        }
    }

    double average = calculateAverage(distance, fuel);

    cout << "Średnie zużycie paliwa na 100 km wynosi: " << average << " l" << endl;

    return 0;
}