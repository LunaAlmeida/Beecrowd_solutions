#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double A, B, C, aux;

    cin >> A >> B >> C;

    if(B < C)
    {
        if(A < C)
        {
            aux = A;
            A = C;
            C = aux;
        }
    }else
    {
        if(A < B)
        {
            aux = A;
            A = B;
            B = aux;
        }        
    }

    if(A >= (B + C))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }
    
    if(pow(A, 2) == (pow(B, 2) + pow(C, 2)))
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }

    if(pow(A, 2) > (pow(B, 2) + pow(C, 2)))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }

    if(pow(A, 2) < (pow(B, 2) + pow(C, 2)))
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if((A == B ) && (B == C) && (A == C))
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }

    if(((A != B ) && (B == C) && (A != C)) || ((A == B ) && (B != C) && (A != C)) || ((A != B ) && (B != C) && (A == C)))
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}