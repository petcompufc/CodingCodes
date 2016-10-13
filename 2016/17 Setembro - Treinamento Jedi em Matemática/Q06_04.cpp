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