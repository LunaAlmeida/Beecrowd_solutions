#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int A, B, aux;

    cin >> A >> B;

    if(A < B)
    {
        aux = B;
        B = A;
        A = aux;
    }

    if(A % B == 0)
    {
        cout << "Sao Multiplos" << endl;
    }else
    {
        cout << "Nao sao Multiplos" << endl;
    }
    return 0;
}