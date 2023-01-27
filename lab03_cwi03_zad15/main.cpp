#include <iostream>
using namespace std;

int main() {
    int n; // d³ugoœæ boku szachownicy

    cout << "podaj dlugosc boku szachownicy" << endl;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i+j) % 2 == 0) cout << "* ";
            else cout << "  "; // dwukrotne wciœniêcie spacji
        }
        cout << endl; // przejœcie do nowego wiersza
    }
cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;
    return 0;
}
