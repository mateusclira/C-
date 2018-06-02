#include <iostream>

using namespace std;

int main()
{
    int n, i, aux, count = 0, resto = 0, resto2 = 0;

    cout << "Enter n!" << endl;
    cin >> n;
    aux = n;

    while(aux != 0)
    {
        aux = aux/10;
        count++;
    }

    aux = n;
    for(i = 0; i < (count/2); i++)
    {
        resto = resto + aux%10;
    }

    aux = n;
    for(i = (count/2) + 1; i < count; i++)
    {
        resto2 = resto2 + aux%10;
    }

    if(resto == resto2)
        cout << "Palindromo!!";
    else
        cout << "Not a palindromo!";

    return 0;
}
