#include <iostream>
//trazer uma biblioteca para dentro do codigo
using namespace std; 
//
int main(){
	
	string name;
	double valorVenda;
	double taxaComissao = 0.05;
	double comissao;
	
	// Cout << Mostrar para fora do programa o que você quer transmitir para o usuario 
	cout<<"Digite O nome do vendedor"<<endl;
	// cin >> Entrada de uma informação de fora do progama para dentro dele
	cin >> name;
	
	cout<<"Digite o valor de venda"<<endl;
	cin >> valorVenda;
	
	comissao = valorVenda * taxaComissao; 
	
	cout << "Vendedor " << name<< endl;
	cout << "Comissão: R$ " << comissao << endl; 
	
	
	return 0;	
}
