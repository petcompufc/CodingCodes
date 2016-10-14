// Enunciado da Questão:
/*
	Nosso programa irá gerar um número aleatório e armazená-lo. Você, então, deve tentar adivinhar qual é esse número;
	adicionalmente, o computador sempre te dará uma dica sobre esse número. Mas cuidado! Ele pode estar mentindo!

	Você deve utilizar a função “rand()” para gerar, aleatoriamente, o número, e fazer com que o computador decida, 
	também aleatoriamente, se ele irá falar a verdade ou se irá mentir.
*/

// Observações do Tio Minho:
/*

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <stdlib.h>
#include <time.h>

// Comando para omitirmos o "std::"
using namespace std;

// Essa função irá imprimir um texto de dica que representa a verdade.
void honesto(int numChute, int numSorteado)
{
	if(numSorteado >= numChute)
		cout << "MAIOR OU IGUAL QUE" << numChute << "!" << endl;
	else
		cout << "MENOR QUE " << numChute << "!" << endl;
}

// Essa função irá imprimir um texto de dica que não é a verdade.
void mentiroso(int numChute, int numSorteado)
{
	if(numSorteado < numChute)
		cout << "MAIOR QUE " << numChute << "!" << endl;
	else
		cout << "MENOR QUE " << numChute << "!" << endl;
}

// Programa Principal
int main()
{
	srand(time(NULL));

	int numSorteado = (rand() % 200) + 1;
	int numChute = 0;

	while(numChute != numSorteado)
	{
		bool falarVerdade = rand() % 2; // 0 == Mentir; 1 == Falar a Verdade

		if(falarVerdade)
			honesto(rand() % 200 + 1, numSorteado);
		else
			mentiroso(rand() % 200 + 1, numSorteado);

		cout << "\nSeu palpite: " << endl;
		cin >> numChute;

		if(numChute != numSorteado)
			cout << "ERROW MISERAVI\n" << endl;
	}

	cout << "ACERTO MISERAVI" << endl;

	return 0;
}