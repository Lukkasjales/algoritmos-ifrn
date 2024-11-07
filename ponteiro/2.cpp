#include <iostream>
using namespace std; 

void soma(int a, int b) {
    int temp = a;
    a = a + b;
    cout << "A soma é " << a << endl << " A: " << temp << " B :" << b << endl;
}

int main() {
    int a, b;
    cout << "Digite os valores A e B" << endl;
    cin >> a >> b;
    soma(a, b);
}