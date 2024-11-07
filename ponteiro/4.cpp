#include <iostream> 
using namespace std;

int main() {
    int linhas = 3, colunas = 3;
    int matriz[3][3] =  {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << &matriz[i][j] << endl;
        }
    }
}