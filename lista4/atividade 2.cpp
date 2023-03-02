#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	char letra;
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
		cout << letra << " é uma vogal" << endl;
	}else{
		cout << letra << " é uma consoante" << endl;
	}
	
	return 0;
}
