#include <iostream>
using namespace std;

//Wczytuje liczbê n od u¿ytkownika
//U¿ywa pêtli for, aby wczytaæ n liczb od u¿ytkownika
//Sumuje wczytane liczby przy u¿yciu zmiennej sum
//Wyswietla sume liczb na ekranie
//
  //  Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430
int main() {

    int n;
    int sum = 0; //zmienna przechowujaca sume liczb


    cout << "prosze podac ilosc liczb ile chcesz sumowac" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cout << "prosze podac liczby do zsumowania: ";
        cin >> sum;
        sum += num;
    }
    cout << "Suma liczb wynosi: " << sum << endl;
    return 0;



}
