#include <iostream>
#include <cmath>
using namespace std;

void frac(float num_real, float &frac_part, int &inteiro) {
    inteiro = static_cast<int>(num_real);
    frac_part = num_real - inteiro;
}

int main() {
    float num_real, frac_part;
    int inteiro;
    
    cout << "Digite um número real" << '\n';
    cin >> num_real;

    frac(num_real, frac_part, inteiro);
    cout << "Parte fracionária" << frac_part << '\n';
    cout << "Parte inteira" << inteiro << '\n';
    
    return 0;
}