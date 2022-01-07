#include <iostream>

using namespace std;

int main()
{
    int password;
    bool flag = true;

    while (flag)
    {
        cin >> password;
        if(password == 2002)
        {
            cout << "Acesso Permitido" << endl;
            flag = false;
        }else{
            cout << "Senha Invalida" << endl;
        }
        
    }
    return 0;
}