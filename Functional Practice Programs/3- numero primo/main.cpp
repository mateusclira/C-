#include <iostream>

using namespace std;

void Prime(int x)
{
    if (x == 2)
        cout << "2 is prime";
    else if (x == 3)
        cout << "3 is prime";
    else if(x == 5 || x == 7)
    {
        cout << x << " is prime";
    }
    else if( x > 3 && ((x%2) != 0) && ((x%3) != 0) && ((x%5) != 0) && ((x%7) != 0))
        cout << x << " is prime";
    else
        cout << x << " is not prime";

}


int main()
{
    int n;

    cout << "Enter n" << endl;
    cin >> n;

    Prime(n);

    return 0;
}
