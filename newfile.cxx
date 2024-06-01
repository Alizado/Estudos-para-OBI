#include <iostream>

int calcularPrecoIngresso(int idade) {
    if (idade <= 17) {
        return 15;
    } else if (idade >= 60) {
        return 20;
    } else {
        return 30;
    }
}

int main() {
    int idade1, idade2;

    std::cout << "Digite a idade da primeira amiga: ";
    std::cin >> idade1;

    std::cout << "Digite a idade da segunda amiga: ";
    std::cin >> idade2;

    int total = calcularPrecoIngresso(idade1) + calcularPrecoIngresso(idade2);

    std::cout << "O total a ser pago pelos dois ingressos é: " << total << " Reais" << std::endl;

    return 0;
}