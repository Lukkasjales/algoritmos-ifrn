#include <iostream>
using namespace std; 

int main() {
    int a = 10;
    int *ptrDobro = &a, 
    **ptrTriplo = &ptrDobro, 
    ***ptrQuadruplo = &ptrTriplo;
    
    cout << *ptrDobro * 2 << endl << **ptrTriplo * 3 << endl << ***ptrQuadruplo * 4 << endl;
}