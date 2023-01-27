#include <iostream>

using namespace std;

int main() {

    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;

    // deklaracja zmiennej n, przeznaczonej do przechowywania liczby n
    int n;

    // wyswietlenie informacji o potrzebie wprowadzenia liczby n

    cout << "prosze podac liczbe n" << endl;
    cin >> n;

    // deklaracja zmiennej sum, przeznaczonej do przechowywania sumy liczb od 1 do n
    int sum = 0;

    // petla for, która iteruje od liczby 1 do liczby n
    for(int i = 1; i <= n; i++) {
        // dodanie aktualnie iterowanej liczby do sumy
        sum += i;
    }

    // wyswietlenie wyniku sumy liczb od 1 do n
    cout << "Suma liczb od 1 do " << n << " wynosi: " << sum << endl;

    return 0;
}
