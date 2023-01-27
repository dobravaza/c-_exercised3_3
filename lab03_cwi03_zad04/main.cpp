#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0; // przypisanie sum = 0, liczba rzeczywista

    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" <<endl;

    cout << "podaj ilosc liczb";
    cin >> n;
    float num[n];

    cout << "Podaj " << n << " liczb: " << endl;
    for (int i = 0; i < n; i++) { // instrukcja for
        cin >> num[i];
        sum += num[i];
    }

    float avg = sum / n; //liczenie sredniej artmetycznej

    cout << "Srednia arytmetyczna podanych liczb to: " << avg << endl;

    return 0;
}
