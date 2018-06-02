#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, n, r, i;

    cout << "Enter with a, n and r" << endl;
    cin >> a >> n >> r;

    cout << "{" << a << ", ";
    for (i = 1; i <= (n -1);i++)
    {
        cout << (a*pow(r,i)) << ", ";
    }
    cout << (a*pow(r,n)) <<"}";


    return 0;
}
