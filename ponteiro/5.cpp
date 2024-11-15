#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i] % 2 == 0) {
            cout << &numeros[i] << endl;
        }
    }
}