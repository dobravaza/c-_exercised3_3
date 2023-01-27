#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "podaj liczbe trojkatow" <<endl;
    cin >> n;
    cout << "podaj liczbe wierwszy w kazdym trojkacie:" << endl;
    cin >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = 1; k <= j; k++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
    }
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;
    return 0;
}
