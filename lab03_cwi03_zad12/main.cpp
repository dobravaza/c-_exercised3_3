#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "podaj dlugosc boku rombu:" << endl;
    cin >> n;

    // petla rysujaca górn¹ czêœæ rombu
    for (int i = 1; i <= n; i++) {
        // wypisanie spacji przed gwiazdkami
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        // wypisanie gwiazdek
        for (int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // petla rysujaca doln¹ czêœæ rombu
    for (int i = n-1; i >= 1; i--) {
        // wypisanie spacji przed gwiazdkami
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        // wypisanie gwiazdek
        for (int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;
    return 0;
}
