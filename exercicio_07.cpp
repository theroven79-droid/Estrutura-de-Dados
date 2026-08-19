#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    char letra;
    cout << "digite uma letra: ";
    cin >> letra;
    char letramin = tolower(letra);
    if (letramin == 'a' || letramin == 'e' || letramin == 'i' || letramin == 'o' || letramin == 'u')
    {
        cout << "letra: '" << letramin << "' é vogal" << endl;
    }
    else
    {
        cout << "letra: '" << letramin << "' é consoante" << endl;
    }
    /* cout << "" << endl;
     for (char letra2 = 97; letra2 < 123; letra2++)
     {
         if (letra2 == 'a' || letra2 == 'e' || letra2 == 'i' || letra2 == 'o' || letra2 == 'u')
         {
             cout << "letra: '" << letra2 << "' é vogal" << endl;
         }
         else
         {
             cout << "letra: '" << letra2 << "' é consoante" << endl;
         }
     }*/
    return 0;
}