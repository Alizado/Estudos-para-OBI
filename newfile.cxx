#include <iostream>
#include <algorithm>

int main() {
    int idade1, idade2, idade3;
    
    std::cin >> idade1;
    std::cin >> idade2;
    std::cin >> idade3;
    
    int idades[3] = {idade1, idade2, idade3};
    
    std::sort(idades, idades + 3);
    
    int idadeCamila = idades[1];
    
    std::cout << idadeCamila << std::endl;
    
    return 0;
}
