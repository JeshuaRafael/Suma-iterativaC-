#include <iostream>

int main() {
    int numero = 0;

    do {
        std::cout << "Por favor, ingrese un numero: ";
        std::cin >> numero;
    } while (numero % 2 != 0);

    std::cout << "El numero ingresado es par." << std::endl;

    return 0;
}