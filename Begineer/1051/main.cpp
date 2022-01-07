#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float salary, tax;

    cin >> salary;
    cout << fixed << setprecision(2);

    if(salary <= 2000)
    {
        cout << "Isento" << endl;
    }else if(salary >= 2000.01 && salary <= 3000.00)
    {
        tax = (salary - 2000) * 0.08;
        cout << "R$ " << tax << endl;
    }else if(salary >= 3000.01 && salary <= 4500.00)
    {
        tax = (1000 * 0.08) + ((salary - 3000) * 0.18);
        cout << "R$ " << tax << endl;
    }else
    {
        tax = (1000 * 0.08) + (1500 * 0.18) + ((salary - 4500) * 0.28);
        cout << "R$ " << tax << endl;
    }

    return 0;
}