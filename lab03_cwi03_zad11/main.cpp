#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "podaj liczbe trojkatow" <<endl;
    cin >> n;
    cout << "podaj liczbe wierszy w kazdym z trojkatow" << endl;
    cin >> m;


    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 0; k < i; k++) {
                for(int l = 0; l < 2 * (m - i); l++) {
                    cout << " ";
                }
                for(int l = 0; l < 2 * i - 1; l++) {
                    cout << "*";
                }
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;
    return 0;

}
