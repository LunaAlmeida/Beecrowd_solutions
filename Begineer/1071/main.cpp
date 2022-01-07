#include <iostream>

using namespace std;

int main()
{
    int X, Y, sum = 0;
    cin >> X >> Y;

    while (X != Y)
    {
        X -= 1;
        if((X % 2) !=0 && (X != Y))
        {
            sum += X;
        }
    }

    cout << sum << endl;
    return 0;
}