#include <iostream>

int main() {
    char resultado;
    int vitorias = 0;

    for (int i = 0; i < 6; ++i) {
        std::cin >> resultado;
        if (resultado == 'V') {
            ++vitorias;
        }
    }

    if (vitorias == 5 || vitorias == 6) {
        std::cout << 1 << std::endl;
    } else if (vitorias == 3 || vitorias == 4) {
        std::cout << 2 << std::endl;
    } else if (vitorias == 1 || vitorias == 2) {
        std::cout << 3 << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}
