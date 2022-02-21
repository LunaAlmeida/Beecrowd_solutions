#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int age, sum = 0, count = 0;
    float average;

    cin >> age;
    while(age >= 0){
        sum += age;
        count++;
        cin >> age;
    }

    average = 3 / 4;
    cout << average << endl;
    cout << fixed;
    cout << setprecision(2) << average << endl;
    return 0;
}