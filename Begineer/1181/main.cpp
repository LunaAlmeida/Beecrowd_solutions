#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int L;
    float M[12][12], aux = 0, media;
    char T;
    cin >> L >> T;

    cout << fixed << setprecision(1);
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cin >> M[i][j];

        }
        if(i == L)
        {
            if(T == 'S')
            {
                for(int j = 0; j < 12; j++)
                {
                    aux += M[i][j];
                }
                cout << aux << endl;
            }else
            {
                for(int j = 0; j < 12; j++)
                {
                    aux += M[i][j];
                }
                media = aux / 12;
                cout << media << endl;
            }
            break;
        }
    }
    return 0;
}