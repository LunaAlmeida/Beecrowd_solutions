#include <iostream>

using namespace std;

int main()
{
    int start, end, total;

    cin >> start >> end;

    if(start > end)
    {
        total = ((24 - start) + end);
    }else
    {
        total = (end - start);
    }

    if( start == end)
    {
        total = 24;
    }

    cout << "O JOGO DUROU " << total << " HORA(S)" << endl;
    return 0;
}