#include <iostream>

using namespace std;

int main() {

    int x, y, count = 0;
    cin >> x >> y;

    for(int i = 1; i <= y; i++)
    {
        count++;

        
        if(count == x)
        {
            count = 0;
            cout << i << endl;
        }else{
            cout << i << " ";
        }
    }
    return 0;
}