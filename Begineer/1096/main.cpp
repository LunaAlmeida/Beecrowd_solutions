#include <iostream>

using namespace std;

int main()
{
    int I = 1, J = 7;

    while(I != 11)
    {
        cout << "I=" << I << " J=" << J << endl;
        J--;
        if(J == 4)
        {
            J = 7;
            I += 2;
        }
    }
    return 0;
}