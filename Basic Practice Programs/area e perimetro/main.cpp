#include <iostream>

using namespace std;

int main()
{
    int Area, Perimetro, base, altura;

    cout << "Digite a base e a altura do retangulo\n";
    cin >> base >> altura;

    Area = base * altura;
    Perimetro = 2*base + 2*altura;

    cout << "Area: " << Area << " Perimetro: " << Perimetro;
    return 0;
}
