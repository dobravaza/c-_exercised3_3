#include <iostream>

using namespace std;

int main() {
        cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;

    int n; //  deklaracja zmiennej silnia do przechowywania warto�ci silni, zainicjowana jako 1
    int silnia = 1; //zmienna przechowuj�ca warto�� silni, zainicjowana jako 1


    cout << "podaj liczbe n ";
    cin >> n;

    //petla wykonujaca obliczenie silni
    for (int i = 1; i <= n; i++) {//: p�tla wykonuj�ca obliczenie silni. Zmienna i jest inicjowana jako 1, a nast�pnie zwi�kszana o 1, dop�ki nie osi�gnie warto�ci n
        silnia *= i; //mnozenie aktualnej wartosci silni przez i
    }

    cout << n << "! = " << silnia << endl;

    return 0;
}
