#include <iostream>
#include <vector>
using namespace std;

int negativos(vector<float> &vec, int n) {
    int negativos = 0;
    cout << "Digite os números do vetor" << '\n';
    for (int i = 0; i < n; i++) {
        int escolha;
        cin >> escolha;
        vec.push_back(escolha);
    }
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] < 0) {
            negativos++;
        }
    }
    
    cout << "Há" << negativos << "número(s) negativos' << \n';
}

int main() {
    int i;
    cout << "Qual o tamanho do vetor?" << '\n';
    cin >> i;
    vector<float> reais(i);
    negativos(reais, i);
}