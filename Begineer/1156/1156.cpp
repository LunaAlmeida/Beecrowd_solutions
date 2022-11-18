#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float S = 0, num = 1, den = 1;

    while(num <= 39)
    {
        S += num/den;
        num +=2;
        den *=2;
    }

    cout << setprecision(2) << fixed << S << endl;

    return 0;
}