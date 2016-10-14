// Enunciado da Questão:
/*
	Os fatores primos de 13195 são 5, 7, 13 e 29.

	Problema:
		Qual o maior fator primo do número 600851475143?
*/

// Observações do Tio Minho:
/*
	Uma fatoração consiste em transformar um número num conjunto de multiplicações dos seus múltiplos.
	Um número pode ser fatorado de VÁRIAS formas. Por exemplo, imagine o número 525.
	Podemos fatorá-lo da seguinte forma:

		525 = 2*3*5*5*7

	Uma lógica de realizar essa fatoração consiste em fazer um "loop" que vá de 2 até menor que o número que desejamos fatorar.
	Para cada iteração desse laço, iremos verificar se o número é divisível pelo iterador (o famoso "i"), e então nós iremos
	imprimir o "i" e dividir o número por ele. Essa divisão serve para "atualizar" o número para que saibamos quando parar de
	fatorar. A fatoração deve parar quando o número seja dividido até ser igual a 1.

	A solução para esse problema consiste, então, em realizar a lógica acima para todos os primos que se encontram entre 2
	e 600851475143 e que dividem esse número, sempre atualizando o valor do número até que ele seja igual a 1.
	Quando o número for igual a 1, então o último valor de "i" que dividimos é igual ao valor do maior primo fator.

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>

// Comando para omitirmos o "std::"
using namespace std;

// Função para Verificar se o Número é Primo
bool isPrimo(long int num)
{
	// Vamos varrer todos os números de 2 até "num"
	for(int i = 2; i < num && i < 10; i++)		// Perceba que também paramos o "for" se o "i" for maior igual que 10.
		if(num % i == 0)						// Se esse número for divisível por "i"...
			return false;						// ... então ele NÃO É PRIMO.

	return true;								// Se o "for" não encontrar nenhum divisor, então o número É PRIMO
}

// Programa Principal
int main()
{
	// Criaremos uma variável para armazenar a somatória
	long int num = 600851475143;

	// Faremos um laço para somar todos os primos de 1 até 2milhões
	// Note no "if" que, como a própria função retorna "true" ou "false", não precisamos escrever
	// nenhuma comparação: só colocamos a função dentro do "if".
	long int i = 1;
	while(num != 1)	
	{
		i++;

		if(isPrimo(i) && (num % i == 0))			// Se o número "i" for primo...
	 		num /= i;								// ... atualizamos o valor de "num".
	 }

	// Imprimimos o valor final da somatória
	cout << "Maior Fator: " << i << endl;

	return 0;
}