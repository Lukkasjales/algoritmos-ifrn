#include <iostream>
#include <vector>
using namespace std;

void min_max(vector<int> &vec, int &min, int &max) {
    for (int i : vec) {
        if (i > max) {
            max = i;
        }
    }
    min = max;
    for (int i : vec) {
        if (i < min) {
            min = i; 
        }
    }
    
    cout << "O mínimo é " << min << " e o máximo é " << max << '\n';
}

int main() {
    int min = 0, max = 0;
    vector<int> numeros {7, 2, 4, 8};
    min_max(numeros, min, max);
}   