#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	int turno;
	
	cout << "Informe o turno de 1 a 3: ";
	cin >> turno;
	
	switch(turno){
		case 1: cout << "Manhã";
		break;
		case 2: cout << "Tarde";
		break;
		case 3: cout << "Noite";
		break;
		default: cout << "Turno inexistente";
	}
}
