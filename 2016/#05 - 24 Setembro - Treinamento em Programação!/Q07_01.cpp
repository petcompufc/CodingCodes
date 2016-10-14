// Enunciado da Questão:
/*
	Sua função é bem simples.
	
	Você deve implementar um sistema que calcule um caixa automático. O que o sistema deve fazer é pedir
	ao usuário (o funcionário do caixa) que digite os preços dos produtos que estão sendo comprados. 
	Os valores só podem ser positivos. 

	Se o funcionário (você, né) digitar o valor “-1”, o programa pára de perguntar preços e imprime o 
	valor total da compra.
*/

// Observações do Tio Minho:
/*

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>

// Comando para omitirmos o "std::"
using namespace std;

// Programa Principal
int main()
{
	float precoUnitario = 0, precoTotal = 0;

	while(precoUnitario != -1)
	{
		cout << "Digite o preco do Produto: ";
		cin >> precoUnitario;

		if(precoUnitario > 0)
			precoTotal += precoUnitario;
		else
			cout << "Valor invalido!!!" << endl;
	}


	cout << "Preco Total: " << precoTotal << endl;

	return 0;
}