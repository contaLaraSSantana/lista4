#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	char ch;
	
	cout << "Digite um caracter: ";
	cin >> ch;
	
	if (ch >= 'A' && ch <= 'Z') {
        cout << "Letra mai�scula" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "Letra min�scula" << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "N�mero" << endl;
    } else {
        cout << "Caractere inv�lido" << endl;
    }
	return 0;
}

