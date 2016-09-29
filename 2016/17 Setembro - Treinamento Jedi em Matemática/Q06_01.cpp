// Enunciado da Questão:
/*
	Faça um programa que recebe uma entrada do usuário do tipo inteiro e
	imprima todos os múltiplos desse número.

*/

// Observações do Tio Minho:
/*
	A solução desse problema consiste em, simplesmente, rodarmos um "loop" para	irmos do número 1 
	até o próprio inteiro que estamos testando.
	Para cada iteração desse laço, verificamos se o valor do iterador (vamos chamá-lo de "i") é tal
	que o número seja divisível por ele, ou seja, que (numero % i == 0).

	Para cada caso que esse teste for verdadeiro (o número for divisível por "i"), vamos imprimir
	o valor de "i", e, assim, o algoritmo funcionará.

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
	// Primeiro, pediremos para que o usuário digite o valor do número que deseje testar
	int num;

	cout << "Digite um valor inteiro: ";
	cin >> num;

	// Agora, iremos fazer o Loop que foi citado na solução
	for(int i = 1; i <= num; i++)
		if(num % i == 0)					// Verificamos a divisibilidade
			cout << i << " - ";				// Imprimimos o iterador caso ele seja múltiplo


	cout << endl;
	return 0;
}