// Enunciado da Questão:
/*
	Faça um sistema que pergunte ao usuário que figura geométrica ele deseja representar 
	(Circunferência, Retângulo ou Triângulo). 

	Depois que o Usuário fizer sua escolha, peça para que ele digite as informações da figura 
	(raio, base, altura, etc.) e imprima o valor do perímetro e da área dessa figura.
*/

// Observações do Tio Minho:
/*

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <math.h>

// Comando para omitirmos o "std::"
using namespace std;

// Programa Principal
int main()
{
	int opcao;

	do
	{
		cout << "\n\nQual figura geométrica você deseja representar?"
		cou << "(1 - Retangulo; 2 - Circunferencia; 3 - Triangulo): "
		cin >> opcao;

	}while(opcao < 0 || opcao > 3);

	if(opcao == 1)
	{
		float base, altura;

		cout << "Digite o valor da base: ";
		cin >> base;

		cout << "Digite o valor da altura: ";
		cin >> altura;

		cout << "\nPerimetro: " << 2*base+2*altura << endl;
		cout << "Area: " << base*altura << endl;
	}
	else if(opcao == 2)
	{
		float raio;

		cout << "Digite o valor do raio: ";
		cin >> raio;

		cout << "Perimetro: " << 2*3.1415*raio << endl;
		cout << "Area: " << 3.1415*raio*raio << endl;
	}
	else if(opcao == 3)
	{
		float lado;

		cout << "Digite o valor dos lados: ";
		cin >> lado;

		cout << "\nPerimetro: " << 3*lado << endl;
		cout << "Area: " << pow(lado, 2) / 4 * sqrt(3) << endl;
	}

	return 0;
}