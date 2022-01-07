#include <iostream>
#include <string>

using namespace std;

int main()
{
    string type_1, type_2, type_3, animal;

    cin >> type_1 >> type_2 >> type_3;

    if(type_1 == "vertebrado")
    {
        if(type_2 == "mamifero")
        {
            if(type_3 == "onivoro")
            {
                animal = "homem";
            }else
            {
                animal = "vaca";
            }
        }else
        {
            if(type_3 == "carnivoro")
            {
                animal = "aguia";
            }else
            {
                animal = "pomba";
            }
        }
    }else
    {
        if(type_2 == "inseto")
        {
            if(type_3 == "hematofago")
            {
                animal = "pulga";
            }else
            {
                animal = "lagarta";
            }
        }else
        {
            if(type_3 == "hematofago")
            {
                animal = "sanguessuga";
            }else
            {
                animal = "minhoca";
            }
        }
    }

    cout << animal << endl;
    return 0;
}