// Enunciado da Questão:
/*
	A soma de todos os primos abaixo de 10 vale 2+3+5+7 = 17.

	Problema:
		Encontre a soma de todos os números primos abaixo de dois milhões.
*/

// Observações do Tio Minho:
/*
	Para solucionar esse problema, é recomendável criar uma função que verificará se um dado número
	é primo ou não.

	A função que iremos implementar segue uma lógica bem prática:
		Um número primo é um número que só é divisível por 1 e por ele mesmo. Isso quer dizer que não
		existe nenhum outro numero entre 1 e o próprio numero que ele seja divisível. Caso contrário,
		ou seja, se existir um número entre 1 e o próprio número que ele seja divisível, então o número
		não é primo.

		A lógica do nossa função, então, consistirá em fazer um "loop" que vai de 2 até um número menor
		que o número que desejamos saber se é primo. Dentro desse for nós iremos testar se o iterador
		(chamado de "i") divide o número com resto 0, o que nos diz que ele é divisível. Se isso acontecer
		então já podemos retornar a função informando que o número NÃO É PRIMO. Se esse "for" varrer inteiro
		o "for" e não encontrar um número múltiplo sequer, então, no final da função, podemos retornar informando
		que o número É PRIMO.

		Obs.: Perceba que a questão nos pede para somarmos os primos abaixo de 2 milhões. Isso significa
		que nossos "loop"s vão fazer loops na casa dos milhões, e farão esses loops várias vezes.
		Para otimizar nossa função, vamos interromper o "for" quando o iterador for igual a 10.
		Isso porque é possivel provar matematicamente que se um número é primo, então não existe nenhum
		número menor que 10 que ele seja divisível.

	Depois que essa função estiver pronta, iremos fazer, no programa principal, um laço para ir de
	2 até 2 milhões. Dentro desse loop, iremos verificar se o iterador é primo. Se ele for primo,
	vamos adicioná-lo a uma variável de somatório e, no final, iremos exibir o valor dessa soma.

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>

// Comando para omitirmos o "std::"
using namespace std;

// Função para Verificar se o Número é Primo
bool isPrimo(int num)
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
	long int soma = 0;

	// Faremos um laço para somar todos os primos de 1 até 2milhões
	// Note no "if" que, como a própria função retorna "true" ou "false", não precisamos escrever
	// nenhuma comparação: só colocamos a função dentro do "if".
	for(int i = 2; i < 2000000; i++)
		if(isPrimo(i))					// Se o número "i" for primo...
	 		soma += i;					// ... o somamos na somatória.

	// Imprimimos o valor final da somatória
	cout << "Soma: " << soma << endl;

	return 0;
}