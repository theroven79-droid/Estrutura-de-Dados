#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    float salario, imposto;
    setlocale(LC_ALL, "portuguese");

    cout << "Salario Anual: ";
    cin >> salario;

    if (salario < 20000)
    {
        cout << "Insento de imposto" << endl;
    }
    else if (salario > 20000 && salario <= 50000)
    {
        imposto = salario * 0.1;
        cout << "Desconto de: -" << imposto << endl;
        salario = salario - imposto;
        cout << "Salario com desconto: " << salario << endl;
    }
    else
    {
        imposto = salario * 0.2;
        cout << "Desconto de: -" << imposto << endl;
        salario = salario - imposto;
        cout << "Salario com desconto: " << salario << endl;
    }
}