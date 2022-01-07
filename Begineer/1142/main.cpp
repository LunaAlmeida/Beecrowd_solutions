#include <iostream>

using namespace std;

int main()
{
    int num, j = 1;

    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cout << j << " " << j + 1 << " " << j + 2 << " PUM" << endl;
        j += 4;
        
    }

    return 0;
}