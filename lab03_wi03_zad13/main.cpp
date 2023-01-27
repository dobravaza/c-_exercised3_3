

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "podaj dlugosc boku pojedynczje czesci klepsydry" << endl;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-1-i; j++) cout << " ";
        for(int j = 0; j < 1+2*i; j++) cout << "*";
        cout << endl;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) cout << " ";
        for(int j = 0; j < 2*n-1-2*i; j++) cout << "*";
        cout << endl;
    }
        cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;
    return 0;

}
