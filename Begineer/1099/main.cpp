#include <iostream>

using namespace std;

int main()
{
    int num_case, X, Y;
    cin >> num_case;

    for(int i = 0; i < num_case; i++)
    {
        cin >> X >> Y;
        int sum = 0;
        if(X > Y)
        {
            while (X != Y + 1)
            {
                X--;
                if((X % 2 )!= 0)
                {
                    sum += X; 
                }
            }
            
        }

        if(X < Y)
        {
            while (X != Y - 1)
            {
                X++;
                if((X % 2 )!= 0)
                {
                    sum += X; 
                }
            }
            
        }

        cout << sum << endl;
    }
    return 0;
}
