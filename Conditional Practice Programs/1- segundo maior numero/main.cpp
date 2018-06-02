#include <iostream>

using namespace std;

int main()
{
    int n, aux1 = 0, i, maxi = 0, number, aux2 = 0;

    cout << "Digit n:" << endl;
    cin >> n;

    cout << "Tell the numbers now:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> number;
        aux2 = min(aux1,number);
        aux1 = max(aux1,number);
        if(aux2 > maxi)
            maxi = aux2;

    }

    cout << maxi;


    return 0;
}
