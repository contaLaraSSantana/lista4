#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num;

    cout << "Digite um número inteiro entre 1 e 5: ";
    cin >> num;

    switch(num) {
        case 1:
            cout << "A\n";
            break;
        case 2:
            cout << "B\n";
            break;
        case 3:
            cout << "C\n";
            break;
        case 4:
            cout << "D\n";
            break;
        case 5:
            cout << "E\n";
            break;
    }

    return 0;
}
