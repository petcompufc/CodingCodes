// Enunciado da Questão:
/*
	Crie um jogo simples:

		1. Armazene em uma variável um valor entre 1 e 200 (randômico).
		2. Peça para o usuário tentar acertar o número. 
		3. Se a tentativa do usuário for maior que o número, 
		   imprima “MAIOR”; se não, imprima “MENOR”.
		4. Se a tentativa do usuário for igual ao número, imprima
		   “ACERTO!” e termine o jogo.
*/

// Observações do Tio Minho:
/*
	Como foi falado na aula: não existem números aleatórios na computação!

	Quando estamos falando de números aleatórios, na Computação, não estamos nos referindo a números REALMENTE
	aleatórios. Afinal, um computador é uma máquina, e ele não é capaz de simplesmente "escolher" um número qualquer.
	Esse tipo de operação não faz sentido.

	Por isso, existem algoritmos que geram números PSEUDO-ALEATORIOS. Eles são considerados "aleatórios" porque, apesar
	de serem pré-determinados, são extremamente difíceis de prever, então são muito difíceis de ser adivinhados.

	No C/C++, existe uma forma bem simples de gerar um número "aleatório", usando as funções "rand()" e "srand()". 
	Seu algoritmo é o seguinte:
		1. Primeiramente, vamos inicializar o "rand()" utilizando a função "srand()". Essa função (que significa
		   "seed-random") nos pede um número qualquer para ser utilizado como "semente" na função "rand()". 
		   Para que nosso número seja difícil de prever, geralmente utilizamos um número que seja gigante e que 
		   se altere constantemente. Uma opção já aderida pela comunidade consiste em utilizar o tempo do próprio 
		   Sistema Operacional, em microssegundos. A função, então, seria:

			   		srand(time(NULL));

		   onde "srand()" é a função que gera a "semente", e "time(NULL)" é a função que retorna o tempo do Sistema.

		2. Utiliza-se, então, a função "rand()" para retornar o valor que nós calculamos em "srand()". Como esse
		   número é gigante, muitas vezes queremos diminuir para gerar um número aleatório apenas em um intervalo
		   (como é o caso da questão). Fazemos, então, a seguinte operação:

			   		rand() % [tamanhoDoIntervalo];

		   	Como sabemos, o resto da divisão por inteiro de um número NUNCA É MAIOR que o próprio número. Então, 
		   	o resto de "rand() % n" será um número que irá de "0" até "n". Se quisermos aumentar o valor inicial
		   	desse intervalo, basta somarmos o resultado de "rand() % n" com o número que quisermos.

	É importante frisar que as funções "rand()" e "srand()" exigem que seja inclusa a biblioteca <stdlib.h>, e a
	função "time(NULL)" exige a inclusão da biblioteca <time.h>.

	---
	Entendendo-se o funcionamento dos números "pseudo-aleatórios", a solução da questão torna-se trivial.
	O algoritmo consiste, basicamente, em gerar e armazenar um valor aleatoriamente gerado em uma variável. Nesse
	ponto, cria-se um Laço de Repetição para se repetir até que o usuário dê um palpite que seja igual ao número
	sorteado; caso contrário, uma das mensagens descritas na questão deve ser impressa.
	

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <time.h>
#include <stdlib.h>

// Comando para omitirmos o "std::"
using namespace std;

// Programa Principal
int main()
{
	// Definir a semente do "rand()"
	srand(time(NULL));  // 16865165176517695

	// Criamos o número sorteado
	int sorteado = (rand() % 200) + 1;
	int chute = 0;

	do
	{
		// Pedimos para o usuário digitar o seu palpite
		cout << "Digite seu palpite: ";
		cin >> chute;

		// Verificamos se o número do palpite é igual, maior ou menor que o número sorteado
		if(chute == sorteado)
			cout << "ACERTOU!" << endl;
		else if(chute > sorteado)
			cout << "MAIOR!" << endl;
		else if(chute < sorteado)
			cout << "MENOR!" << endl;

	} while(chute != sorteado);	// Faremos isso enquanto o número do chute for diferente do sorteado.

	return 0;
}