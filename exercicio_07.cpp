#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    char letra;
    cout << "digite uma letra: ";
    cin >> letra;
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        cout << "é vogal" << endl;
    }
    else
    {
        cout << "é consoante" << endl;
    }
    return 0;
}