#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int N, i;
    cin >> N;

    cout << fixed;
    for(i = 1; i <= N; i++)
    {
        if((i % 2 )== 0)
        {
            cout << i << "^2 = " << (int) pow(i, 2) << endl;
        }
    }
    return 0;
}