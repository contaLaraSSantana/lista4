#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	int semana;
	
	cout << "Informe o dia da semana:";
	cin >> semana;
		
	switch (semana) {
			case 1: cout << "Domingo";
		break;
			case 2: cout << "Segunda";
		break;	
			case 3: cout << "Ter�a";
		break;	
			case 4: cout << "Quarta";
		break;
			case 5: cout << "Quinta";
		break;
			case 6: cout << "Sexta";
		break;
			case 7: cout << "S�bado";
		break;
		
		default: cout << "Dia da semana inexistente";
	}
	
}
