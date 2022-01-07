#include "iostream"

using namespace std;
int main()
{
    int numbers[4];
    int count = 0;
    for(int i=0; i <= 4; i++)
    {
        cin >> numbers[i];
        if((numbers[i] % 2) == 0)
        {
            count++;
        }
    }
    cout << count << " valores pares" << endl;
    return 0;
}