#include <iostream>

using namespace std;

int main()
{
    int n, i = 0, aux1, aux2;

    cout << "Digit N" << endl;
    cin >> n;
    aux1 = 2;
    aux2 = 3;
    cout << "2" << endl;
    do
    {
        if(aux2 == 3 || aux2 == 5 || aux2 == 7)
        {
            aux1 = aux2;
            cout << aux2 <<endl;
            aux2 = aux2 + 2;
            i++;
        }
        else if(((aux2%2) != 0) && ((aux2%3) != 0) && ((aux2%5) != 0) && ((aux2%7) != 0))
        {
            aux1 = aux2;
            cout << aux2 <<endl;
            aux2 = aux2 + 2;
            i++;
        }
        else
            aux2 = aux2 + 2;


    }while(i < (n - 1));

    return 0;
}
