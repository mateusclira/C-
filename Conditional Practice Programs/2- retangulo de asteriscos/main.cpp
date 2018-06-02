#include <iostream>

using namespace std;

int main()
{
    int base, altura, i, j, k;
    cout << "Digite a base e a altura do retangulo!" << endl;
    cin >> base >> altura;

    for (i = 1; i <= base;i++)
    {
        cout << "*";
        if (i == 1 || i == base)
        {
            for(j = 1; j < (altura); j++)
            {
                cout << "*";
            }
        }
        else
        {
           for(j = 1; j < altura -1; j++)
           {
            cout <<" ";
           }
            cout <<"*";
        }
        cout << endl;
    }

    return 0;
}
