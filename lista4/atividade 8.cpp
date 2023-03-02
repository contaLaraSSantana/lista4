#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit, kelvin;
    int opcao;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    cout << "Digite 1 para converter para Fahrenheit ou 2 para converter para Kelvin: ";
    cin >> opcao;

    if (opcao == 1) {
        fahrenheit = (celsius * 9/5) + 32;
        cout << "A temperatura em Fahrenheit é: " << fahrenheit << "°F" << endl;
    }
    else if (opcao == 2) {
        kelvin = celsius + 273.15;
        cout << "A temperatura em Kelvin é: " << kelvin << "K" << endl;
    }
    else {
        cout << "Opção inválida." << endl;
    }

    return 0;
}
