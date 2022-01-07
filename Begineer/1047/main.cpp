#include <iostream>

using namespace std;

int main()
{
    int startH, endH, startM, endM, totalH, totalM, total;

    cin >> startH >> startM >> endH >> endM;

    totalH = endH - startH; 
    if(totalH >= 0)
    {
        if((startH == endH) && (startM == endM))
        {
            totalH = 24;
            totalM = 0;
        }else if(startH == endH)
        {
            if(startM < endM)
            {
                totalH = 0;
                totalM = endM - startM;
            }else if(startM > endM)
            {
                totalH = 23;
                totalM = 60 - (startM - endM);
            }
        }else
        {
            if(startM < endM)
            {
                totalH = endH - startH;
                totalM = endM - startM;
            }else if(startM > endM)
            {
                totalH = endH - startH - 1;
                totalM = 60 - (startM - endM);
            }else
            {
                totalH = endH - startH;
                totalM = 0;
            }
        }
    }else
    {
        totalH = (24 - startH) + endH - 1;
        if(startM < endM)
        {
            totalM = endM - startM;
        }else if(startM > endM)
        {
            totalM = 60 - (startM - endM);
        }
    }

    cout << "O JOGO DUROU " << totalH << " HORA(S) E " << totalM << " MINUTO(S)" << endl;
    return 0;
}