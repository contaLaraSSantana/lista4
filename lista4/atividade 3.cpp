#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;
    
    if(num > 0){
    	cout << "O número " << num << " é positivo " << endl;
	}
	else if(num < 0){
		cout << "O número " << num << " é negativo " << endl;
	}
	else{
		cout << "O número é zero" << endl;
	}
	
	return 0;
}
