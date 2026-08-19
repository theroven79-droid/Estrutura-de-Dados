#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;
    while (1)
    {
        cout << "digite um numero ou 0 para sair." << endl;
        cout << "Numero: ";
        cin >> numero;
        if (numero == 0)
        {
            break;
        }
        if (numero % 2 == 0)
        {
            cout << "---PAR---" << endl
                 << endl;
        }
        else
        {
            cout << "---IMPAR---" << endl
                 << endl;
        }
    }
    /*for (int i = 1; i < 5000; i++)
    {
        if (i % 2 == 0)
        {
            cout << "numero: " << i << "\t---PAR---" << endl << endl;
        }
        else
        {
            cout << "numero: " << i << "\t---IMPAR---" << endl << endl;
        }
    }*/
    return 0;
}
