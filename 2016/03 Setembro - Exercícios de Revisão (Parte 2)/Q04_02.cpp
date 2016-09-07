// Enunciado da Questão:
/*

	Um clássico problema de programação! Faça um programa que receba uma quantia de dinheiro (double ou float) e
	calcule a quantidade quantas notas de R$100, R$50, R$20, R$10, R$5, R$2, e moedas de R$1, R$0.50, R$0.25, R$10,
	R$0.05, são necessárias para representar essa quantia. Sempre comece “contando” das notas mais altas (R$100)
	até a moeda mais baixo (R$0.05).

	DICA: O operador “%”, se você usar o “dinheiro” como divisor, já te dá a quantidade certa de notas.
	Como usar esse operando pra resolver o problema?

*/

// Observações do Tio Minho:
/*
	Esse problema clássico da Programação possui várias abordagens.

	Vamos fazer uma que talvez não seja a mais eficiente, mas é bastante prática!

	O operador "%" (resto de divisão), nos retorna o resto da divisão de um número por outro. Perceba como a própria
	definição do operador já nos ajuda a resolver o problema: podemos usar o "%" para saber quanto nos resta de dinheiro
	depois que nós o dividimos por uma certa "nota" de dinheiro.

	Por exemplo:
	Se tivéssemos R$437 reais, podemos fazer a operação "R$437 % 100" para saber quanto de dinheiro sobrará depois que
	o dividirmos em notas de R$100. A resposta é R$37, como você pode conferir à mão.
	E a quantidade de notas? Simples. É o resultado da divisão "R$437 / 100" (lê-se: 437 reais DIVIDIOS em notas de 100,
	nos dá quantas notas?), sendo a resposta "4".

	O algoritmo, então, consiste em fazer a divisão do valor total pela maior cédula, depois atualizar o valor total usando
	o operador "%" e repetir o mesmo para a próxima maior cédula.

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <string>

// Comando para omitir o "std::"
using namespace std;

// Programa Principal
int main()
{
	float valor;

	cout << "Digite a quantidade de dinheiro: ";
	cin >> valor;

	int notas = valor / 1;
	int moedas = valor * 100 - notas * 100;

	cout << endl << "Para trocar R$ " << notas << "." << moedas << " você precisará de:" << endl << endl;

	cout << notas / 100 << " nota(s) de R$ 100";
	notas = notas % 100;
	cout << "  >> Restante: R$ " << notas << "." << moedas << endl;

	cout << notas / 50 << " nota(s) de R$ 50";
	notas = notas % 50;
	cout << "  >> Restante: R$ " << notas << "." << moedas << endl;

	cout << notas / 20 << " nota(s) de R$ 20";
	notas = notas % 20;
	cout << "  >> Restante: R$ " << notas << "." << moedas << endl;

	cout << notas / 10 << " nota(s) de R$ 10";
	notas = notas % 10;
	cout << "  >> Restante: R$ " << notas << "." << moedas << endl;

	cout << notas / 5 << " nota(s) de R$ 5";
	notas = notas % 5;
	cout << "  >> Restante: R$ " << notas << "." << moedas << endl;

	cout << notas / 1 << " nota(s) de R$ 1";
	notas = notas % 1;
	cout << "  >> Restante: R$ " << notas << "." << moedas << endl;


	cout << moedas / 50 << " moeda(s) de R$ 0.50";
	moedas = moedas % 50;
	cout << "  >> Restante: R$ " << notas << "." << moedas << endl;

	cout << moedas / 25 << " moeda(s) de R$ 0.25";
	moedas = moedas % 25;
	cout << "  >> Restante: R$ " << notas << "." << moedas << endl;

	cout << moedas / 10 << " moeda(s) de R$ 0.10";
	moedas = moedas % 10;
	cout << "  >> Restante: R$ " << notas << ".0" << moedas << endl;

	cout << moedas / 5 << " moeda(s) de R$ 0.05";
	moedas = moedas % 5;
	cout << "  >> Restante: R$ " << notas << ".0" << moedas << endl;

	cout << moedas / 1 << " moeda(s) de R$ 0.01" << endl;


	return 0;
}
