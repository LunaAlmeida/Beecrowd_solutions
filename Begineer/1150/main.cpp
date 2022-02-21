#include <iostream>

using namespace std;

int main() {

    int X, Z, sum = 0, count = 1, aux = 0;

    cin >> X >> Z;
    while(Z <= X)
    {
        cin >> Z;
    }
    sum = X;
    while(sum <= Z)
    {
        X++;
        count++;
        sum += X;
    }
    cout << count << endl;
    return 0;
}