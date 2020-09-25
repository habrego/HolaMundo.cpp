// HolaMundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;

void HolaMundos() {
    std::cout << "Hola Mundo!\n";
}

int main() {
    std::cout << "1-Hola Mundo\n";
    std::cout << "2-Variables\n";
    std::cout << "0-Salir\n";
    std::cout << "Digite Opcion:\n";
    int input;
    cin >> input;

    switch (input) {
    case 1:
        HolaMundos();
        break;
    }
}

