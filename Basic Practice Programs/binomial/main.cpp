#include <iostream>

using namespace std;

int main()
{
    int a,b, quadrado;

    cout << "Digite a e b" << endl;
    cin >> a >> b;

    quadrado = (a*a) + (2*a*b) + (b*b);

    cout << quadrado;
    return 0;
}
