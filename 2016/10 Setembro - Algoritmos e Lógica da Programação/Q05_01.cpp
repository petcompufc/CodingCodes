// Enunciado da Questão:
/*
	Se listarmos todos os números naturais abaixo de 10 que
	sejam divisíveis por 3 e 5, nós teremos 3, 5, 6 e 9. A soma
	desses números é igual a 23.

	Problema:
		Encontre a soma de todos os múltiplos de 3 e 5, que estejam
		abaixo de 1000.

*/

// Observações do Tio Minho:
/*
	A divisibilidade é uma propriedade bastante simples dos números.
	Basicamente, podemos dizer que um número (chamaremos ele de "x") é divisível por outro número (chamaremos ele de "y")
	quando a divisão inteira (x / y) não deixa resto algum. Vamos, por exemplo, tentar determinar se 283 é divisível por 3
	e se 1554 é divísvel por 2:

				283 | 3					1554 | 2
			   -282 | 94		   	   -1554 | 777
			   ---------    	  	   -----------
			      1 					   0

	Como podemos perceber, a divisão (283 / 3) possui resto 1, então 283 não é divisível por 3.
	Por outro lado, a divisão (1554 / 2) possui resto 0, então 1554 é divisível por 2.

	A operação no C++ que nos restorna o resto da divisão de um número por outro é o sinal de porcentagem "%" (Mas em muitas linguagens
	ele é chamado de "mod"). 
	Para os exemplos acima, se fizéssemos (283 % 3) teríamos como resultado 1, que é o resto da divisão (283 / 3); e se fizéssemos
	(1554 % 2) teríamos como resultado 0, que é o resto da divisão (1554 / 2).

	O nosso programa, então, será bem simples: iremos fazer um "for" que irá do valor inicial 1 até 1000 (não incluiremos o próprio 1000)
	e iremos verificar se o número "i" (o iterador do "for") é divisível por 3 ou 5, ou seja, se (i % 3 == 0) ou (i % 5 == 0).
	Se verificarmos que esse número "i" é divisível por um dos dois números, então iremos somar seu valor a uma variável qualquer, e no
	final exibiremos o valor dessa somatória

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
	// Primeiro, iremos criar a variável que armazenará a somatória.
	// Como os números são inteiros, então a somatória também pode ser inteira.
	int somatoria = 0;

	// Aqui nós iremos varrer todos os números de 1 até 1000, verificando se (i % 3 == 0) ou (i % 5 == 0)
	for(int i = 1; i < 1000; i++)
		if(i % 3 == 0 || i % 5 == 0){
			cout << i << endl;
			somatoria += i;
		}

	// Por fim, exibimos o valor armazenado na somatória
	cout << "Soma: " << somatoria << endl;

	return 0;
}