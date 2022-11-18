#include <iostream>
#include <iomanip>

using namespace std;

int main()
{    
    double M[12][12];
    double soma = 0, media = 0;
    char O;
    cin >> O;
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
            if((i < j) && (!(((i+1 )+ (j+1)) <= 12+1)))
            {
                soma = soma + M[i][j];
            }
        }
    }
    cout << fixed << setprecision(1);
    if(O == 'S')
    {
        cout << soma << endl;
    }else{
        media = soma / 30;
        cout << media << endl;
    }
    return 0;
}