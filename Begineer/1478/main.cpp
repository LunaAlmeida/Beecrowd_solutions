#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N = 1;

    while(N != 0)
    {
        cin >> N;
        int matriz[N][N];
        if(N > 0)
        {
            for(int i = 0; i < N; i++)
            {
                for(int j = 0; j < N; j++)
                {
                    int aux = 0;
                    if(i == 0)
                    {
                        aux = j + 1;
                    }
                    if(j == 0)
                    {
                        aux = i + 1;
                    }

                    if((i > 0) and (j > 0))
                    {
                        if((j <= i))
                        {
                            aux = matriz[i][j - 1] - 1;
                        }else{
                            aux = matriz[i][j - 1] + 1;
                        }
                    }

                    matriz[i][j] = aux;
                    if(j != N -1)
                    {
                        cout << setw(3) << right << matriz[i][j] << " ";
                    }else{
                        cout << setw(3) << right << matriz[i][j] << endl;
                    }
                }
            }
            cout << endl;
        }

    }

    return 0;
}