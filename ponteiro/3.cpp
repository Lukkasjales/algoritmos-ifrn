#include <iostream> 
#include <vector>
using namespace std;

int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < array.size(); i++){ 
        cout << &array[i] << endl;
    }
}