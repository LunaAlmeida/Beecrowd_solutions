#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N = 0, X = 0, Y = 0;

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> X >> Y;
        int count = 0, sum = 0;
        while (count != Y)
        {
            if((X % 2) != 0)
            {
                sum += X;
            }else{
                X++;
                sum += X;
            }
            X +=2;
            count++;
        }
        cout  << sum << endl;
    }
    return 0;
}