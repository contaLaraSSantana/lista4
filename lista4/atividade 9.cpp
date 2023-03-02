#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, nmaximo;
	bool mentiroso;

	cout << "Informe o número inteiro de 1 a 10: ";
    cin >> num;
    
    cout << "número máximo de multiplicação: ";
    cin >> nmaximo;
            
    if( num > 10){
    	cout << "Não disponivel";
	}else{
		for( int i=0; i<=nmaximo ; i++)
            cout<<num<<" * "<<i<<" = " << num*i<<endl;
	}
    
	

}
