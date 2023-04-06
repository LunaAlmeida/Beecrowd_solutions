#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int N = 1, atual;
    while (N != 0)
    {
        cin >> N;
        if(N > 0)
        {
            int array[N][N];
            for(int i=0; i < N; i++)
            {
                for(int j= 0; j < N; j++)
                {
                    atual = i + 1;

                    if(j + 1 < atual)
                    {
                        atual = j + 1;
                    }

                    if((N - i) < atual)
                    {
                        atual = N - i;
                    }

                    if((N - j) < atual)
                    {
                        atual = N - j;
                    }
                    array[i][j] = atual;

                    if(j + 1 != N)
                    {
                        cout << setw(3) <<right << array[i][j] << " ";
                    }else{
                        cout << setw(3) << array[i][j] << endl;
                    }
                    
                }
                
            } 
            cout << endl;       
        }
    }

    return 0;
}