// Enunciado da Questão:
/*

	Crie uma Função que calcule a Fibonacci de um número. A Sequência de Fibonacci é uma famosa sequência matemática
	que dita que cada número “i” é igual à soma dos seus dois antecessores (“i-1” e “i-2”). Os dois primeiros elementos
	já são conhecidos e possuem os valores 1 e 1, respectivamente. A sua função deve calcular todos os outros valores
	de Fibonacci para qualquer número “i” da sequência, e retornar o resultado no final. 

*/

// Observações do Tio Minho:
/*
	A Sequência de Fibonacci já era um clássico da matemática e dos algoritmos mesmo antes da programação surgir!

	A abordagem da função é bem simples:
	Crie duas variáveis: "i" e "i2".

	Inicialize "i" com 1 e "i2" com 1.

	Você então fará um for que vai até um limite (sendo que esse limite é o número "i" da Sequência, que você deverá
	pedir como parâmetro da Função), e para cada laço ele faz a seguinte troca:
	Ps.: O for deve começar com o índice igual a 2, já que os elementos [0] e [1] já começam calculados.

		| Armazena o valor de "i+i2" em uma variável "i3"
		| Passa o valor de "i2" para "i".
		| Passa o valor de "i3" para "i2".

	Se a repetição for bem feita, esse algoritmo deverá lhes retornar o valor de Fibonacci

	Ps2.: A Sequência de Fibonacci é famosa porque seu padrão geométrico foi observado em muitas formas da própria natureza
		  (Ex.: Conchas, Formato do Cérebro Humano, Formato de Germinação de Plantas), e é considerado uma das poucas fórmulas
		  que representam fidedignamente elementos da Natureza.

	Ps3.: O formato geométrico da Sequência de Fibonacci ganhou o apelido de "Proporção Áurea" (Golden Ratio), e é muito usada
		  em artes, visuais e musicais. Um exemplo interessante é a música "Lateralus", da minha banda preferida Tool. Os versos
		  da letra da música são dispostas numa fórmula de sílabas poéticas que seguem a Sequência de Fibonacci. 

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <string>

// Comando para omitir o "std::"
using namespace std;

int fibonacci(int position)
{
	int num1 = 1, num2 = 1;

	for(int i = 2; i < position; i++)
	{
		int num3 = num1+num2;
		num1 = num2;
		num2 = num3;
	}

	return num2;
}

// Programa Principal
int main()
{
	// Sequência dos 20 primeiros números de Fibonacci
	for(int i = 1; i <= 20; i++)
		cout << fibonacci(i) << "  ";

	return 0;
}