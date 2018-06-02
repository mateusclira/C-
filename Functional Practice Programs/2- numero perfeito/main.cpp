#include <iostream>

using namespace std;

bool checkPerfect(int x)
{
    int sum = 0, i;
    for(i = 1; i < x; i++)
    {
        if (x%i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == x)
        return true;
    else
        return false;
}
int main()
{
    int n;
    bool check;
    cout << "Enter n" << endl;
    cin >> n;

    check = checkPerfect(n);
    cout << check;
    return 0;
}
