#include <iostream>

using namespace std;

int factorial (int x)
{
    if(x != 0)
        x = x*factorial(x-1);
    else
        x = 1;

    return x;
}

int main()
{
    int n;

    cout << "Enter a number!" << endl;
    cin >> n;

    cout << factorial(n);
    return 0;
}
