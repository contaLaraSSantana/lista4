#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int dia;

    cout << "Digite um número inteiro entre 1 e 7: ";
    cin >> dia;
    
    switch (dia) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Dia util" << endl;
            break;
        case 6:
        case 7:
            cout << "Final de semana" << endl;
            break;
        default:
            cout << "Numero invalido" << endl;
            break;
    }

    return 0;
}
