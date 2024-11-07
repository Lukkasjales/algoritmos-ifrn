#include <iostream>
using namespace std; 

int main() {
    int inteiro = 10;
    float real = 2.5;
    char caractere = 's';

    int *ptr_inteiro = &inteiro; 
    float *ptr_real = &real;
    char *ptr_caractere = &caractere;
    
    cout << *ptr_inteiro << " " << *ptr_real << " " << *ptr_caractere << endl;   
    
    *ptr_inteiro = 11;
    *ptr_real = 2.9;
    *ptr_caractere = 'a';

    cout << *ptr_inteiro << " " << *ptr_real << " " << *ptr_caractere << endl;   
}