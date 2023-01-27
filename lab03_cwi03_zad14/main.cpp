#include <iostream>

using namespace std;

int main() {
    int bok, wysokosc;
    cout << "podaj dlugosc boku rownlegloboku" << endl;
    cin >> bok;
    cout << "podaj wysoksoc rownolegloboku" ;
    cin >> wysokosc;


    for (int i = 0; i < wysokosc; i++) {
        for (int j = 0; j < bok; j++) {
            cout << "* ";
        }
        cout << endl;
    }
        cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;
    return 0;
}
