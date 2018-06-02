#include <iostream>

using namespace std;

int main()
{
    int a, n, d, i;

    cout << "Digit a, n and d:" << endl;
    cin >> a >> n >> d;

    cout << "{" << a << ", ";
    for (i = 1; i < n; i++)
    {
        cout << (a + d*i) << ", ";
    }
    cout << (a+ d*n) << "}";

    return 0;
}
