#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "podaj dlugosc boku kwadratu: " <<endl;
    cin >> n;
    // Rysowanie górnej i dolnej ramki
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    // Rysowanie œrodka kwadratu
    for (int i = 0; i < n-2; i++) {
        cout << "*";
        for (int j = 0; j < n-2; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    // Rysowanie dolnej ramki
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
     cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;

    return 0;
}
