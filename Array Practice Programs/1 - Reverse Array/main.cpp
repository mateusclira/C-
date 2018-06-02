#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter Array's size:" << endl;
    cin >> n;

    int A[n], aux[n];

    for(i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(i = 0, j = (n-1); i < n; i++, j--)
    {
        aux[i] = A[j];
        cout << aux[i] << " ";
    }


    return 0;
}
