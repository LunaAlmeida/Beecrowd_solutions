#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double X, N[100], aux;

    cin >> X;
    cout << fixed << setprecision(4);

    for(int i = 0; i < 100; i++)
    {
        if(i == 0)
        {
            N[i] = X;
        }else
        {
            N[i] = aux / 2;
        }
        aux = N[i];
        cout << "N[" << i << "] = " << aux << endl;
    }
    return 0;
}