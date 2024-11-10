#include <iostream>
#include <cmath>

void frac(float num, int &inteiro, float &frac) {
    inteiro = static_cast<int>(num);
    frac = num - inteiro;
}

int main() {
    float num;
    int inteiro;
    float frac_part;

    std::cout << "Digite um número real: ";
    std::cin >> num;

    frac(num, inteiro, frac_part);

    std::cout << "Parte inteira: " << inteiro << std::endl;
    std::cout << "Parte fracionária: " << frac_part << std::endl;

    return 0;
}
