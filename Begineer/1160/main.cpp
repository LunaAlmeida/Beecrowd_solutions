#include <iostream>
#include <math.h> 

using namespace std;

int main()
{
    int quantity = 0;
    double PA = 0, PB = 0, G1 = 0, G2 = 0, years;
    
    cin >> quantity;
    while(quantity != 0)
    {
        cin >> PA >> PB >> G1 >> G2;
        years = 0;
        while(PA <= PB)
        {
            PA += floor(PA * (G1/100));
            PB += floor(PB * (G2/100));
            years++;
            if(years > 101)
            {
                break;
            }
        }
        quantity--;
        if(years <= 100)
        {
            cout << years << " anos." << endl;
        }else
        {
            cout << "Mais de 1 seculo." << endl;
        }
        
    }

    return 0;
}