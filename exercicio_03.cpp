#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	cout << "Digíte sua idade: ";
	cin >> idade;
	
	if(idade <18){
		cout <<"Menor de idade." <<endl;
	}
	else{
		cout <<"Maior de idade." <<endl;
	}
	return 0;
}
