#include <iostream>
#include <locale.h>
using namespace std;

void resultado(int *n);

int main(){
	setlocale (LC_ALL, "portuguese");
	int n;
	cout << "Digite um número: ";
	cin >> n;
	resultado(&n);	
	return 0;
}

void resultado(int *n){
	if (*n >= 10 && *n <= 20){
		cout << "O número está no intervalo de 10 a 20" << endl;
	}
	else{
		cout << "O número está fora do intervalo 10 a 20" << endl;
	}
}
