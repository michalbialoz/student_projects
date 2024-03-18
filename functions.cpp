#include "functions.h"

#include <string>
#include <sstream>

double getDistance() {
    string input;
    double distance;
        cout << "Podaj przebytą odległość (km): ";
        getline(cin, input);
        if (input.find(',') != string::npos) {
            //Nieprawidłowe dane wejściowe. Nie używaj przecinka
            return -1;
        }
        stringstream ss(input);
        if (!(ss >> distance)) {
            //Nieprawidłowe dane wejściowe. Wprowadź liczbę
            return -2;
        }
        if (distance <= 0) {
            //Odległość nie może być ujemna ani równa 0. Spróbuj ponownie
            return -3;
        }
    return distance;
}

double getFuel() {
    string input;
    double fuel;
        cout << "Podaj ilość zużytego paliwa (l): ";
        getline(cin, input);
        if (input.find(',') != string::npos) {
            //Nieprawidłowe dane wejściowe. Nie używaj przecinka
            return -1;
        }
        stringstream ss(input);
        if (!(ss >> fuel)) {
            //Nieprawidłowe dane wejściowe. Wprowadź liczbę
            return -2;
        }
        if (fuel <= 0) {
            //Ilość paliwa nie może być ujemna ani równa 0. Spróbuj ponownie
            return -3;
        }
    return fuel;
}

double calculateAverage(double distance, double fuel) {
    return (fuel * 100) / distance;
}