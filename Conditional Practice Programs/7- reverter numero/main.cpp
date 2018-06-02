#include <iostream>

using namespace std;

int main()
{
    int n, i, aux, aux2 = 1, aux3 = 0, count = 0;

    cout << "Digit N" << endl;
    cin >> n;
    aux = n;
    while(aux != 0)
    {
        aux = aux/10;
        count++;
    }

    for(i = 0; i <= (count -1); i++)
    {
        aux2 = aux2*10;
    }
    aux = n;
    for (i = aux2; (i >= 10); i = i/10)
    {
        aux3 = aux3 + ((aux%10)*i);
        aux = aux/10;
    }
    aux3 = aux3/10;

    cout << "The reverse of " << n << " is " << aux3;

    return 0;
}
