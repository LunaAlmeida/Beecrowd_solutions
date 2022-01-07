#include <iostream>
#include <vector>

using namespace std;

int main()
{ 
    int number, highest = 0, position = 0;

    for(int i = 0; i < 100; i++)
    {
        cin >> number;
        
        if(number > highest)
        {
            highest = number;
            position = i + 1;
        }
    }

    cout << highest << endl;
    cout << position << endl;

    return 0;
}