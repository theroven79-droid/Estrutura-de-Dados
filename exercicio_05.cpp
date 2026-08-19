#include <iostream>
#include <locale.h>
using namespace std;

void resultado(float n);

int main(){
	setlocale(LC_ALL, "portuguese");
	float n;
	cout << "Digite um numero: ";
	cin >> n;
	resultado(n);
	return 0;
}



void resultado(float n){
	if(n>0){
		cout << "Número positivo." << endl;
	}
	else if(n<0){
		cout << "Número negativo." << endl;
	}
	else{
		cout << "Número ZERO." << endl;
	}
}
