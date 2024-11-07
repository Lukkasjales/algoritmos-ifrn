#include <iostream>
using namespace std;

int main() {
    int l, temp, primeiro = 0, segundo = 1;
    
    cout << "Digite o valor L" << endl;
    cin >> l;
    
    while (temp < l) {
        temp = segundo;
        segundo = primeiro + segundo;
        primeiro = temp;
        cout << temp;
    }
}