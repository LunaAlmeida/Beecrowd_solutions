#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float nota = 0, nota1 = 0, nota2 = 0, average = 0;
    bool flag = true;

    while(flag)
    {
        cin >> nota;
        if((nota >= 0) && (nota <=10))
        {
            if(nota1 == 0)
            {
                nota1 = nota;
            }else{
                nota2 = nota;
                flag = false;
                average = (nota1 + nota2) / 2;
            }
            
        }else{
            cout << "nota invalida" << endl;
        }
    }
    cout << fixed;
    cout << "media = " << setprecision(2) << average << endl;
    return 0;
}