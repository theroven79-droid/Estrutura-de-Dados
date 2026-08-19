#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    int verificado;
    float lado1, lado2, base;
    setlocale(LC_ALL, "portuguese");
    cout << "Me de os lados dos triangulos:" << endl;
    cout << "Lado A: ";
    cin >> lado1;
    cout << "Lado B: ";
    cin >> lado2;
    cout << "Base C: ";
    cin >> base;

    while (1)
    {
        if (lado1 == lado2 && lado1 == base)
        {
            cout << "Verificacao 1 true " << endl;
            cout << "Triangulo equilátero" << endl;
            break;
        }
        if (lado1 == lado2 && lado1 != base)
        {
            cout << "Verificacao 2 true" << endl;
            cout << "Triangulo isósceles" << endl;
            break;
        }
        if (lado1 != lado2 && lado1 != base && lado2 != base)
        {
            cout << "Verificacao 3 true" << endl;
            cout << "Triangulo escalano" << endl;
            break;
        }
    }
}