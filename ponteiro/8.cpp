#include <iostream>
#include <vector>
using namespace std;

int ordenar(int a, int b, int c) {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    
    cout << a << " " << b << " " << c << endl;
    
    return 0;
}

int main() {
    int a, b, c;
    cout << "Digite os valores" << endl;
    cin >> a >> b >> c;
    ordenar(a, b, c);
}