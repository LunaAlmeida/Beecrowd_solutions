#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float M[12][12];
    float soma = 0, media = 0;
    char O;
    cin >> O;
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
            if(i > j)
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
        media = soma / 66;
        cout << media << endl;
    }

    return 0;
}