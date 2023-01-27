
#include <iostream>

int main() {
    int bok; //zmienna przechowuj¹ca d³ugoœæ boku kwadratu
    std::cout << "podaj dlugosc boku kwadratu" << std::endl;
    std::cin >> bok;

    for (int i = 0; i < bok; i++) {
        for (int j = 0; j < bok; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
         std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;

    return 0;
}
