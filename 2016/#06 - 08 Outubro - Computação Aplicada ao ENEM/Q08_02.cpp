// Enunciado da Questão:
/*
	O padrão internacional ISO 216 define os tamanhos de papel utilizados em quase todos os países. 
	O formato-base é uma folha retangular de papel chamada de A0. A partir dele, dobra-se a folha ao
	meio, sempre no lado maior, definindo os demais formatos, conforme o número da dobradura. Por exemplo, 
	A1 é a folha A0 dobrada ao meio uma vez. A2 é a folha A0 dobrada ao meio duas vezes, e assim sucessivamente.

	Faça um programa que
		a) Calcule as dimensões da folha A0, sabendo que a folha A4 possui as dimensões 21x29.7 cm.
		b) Receba um número de dobra e, a partir das dimensões do A0, imprima as dimensões do papel A[nº da dobra].
*/

// Observações do Tio Minho:
/*
	A solução consiste em verificar qual lado (largura ou altura) deve-se realizar a operação (dobrar ou desdobrar).

	Para o problema da Letra A, nós devemos "desdobrar" a folha de A4 até que ela seja igual a folha de A0.
	Como o próprio enunciado deixa a perceber, a folha A4 é obtida dobrando 4 vezes a folha A0; então pra obter a
	folha A0, temos que desdobrar 4 vezes a folha A4. Como a dobra consiste em dividir ao meio a maior parte, a
	"desdobra" consiste na operação contrária: multiplicar por 2 a menor parte.

	Para o problema da Letra B, nós faremos um processo semelhante. Primeiramente, iremos pedir que o usuário digite
	o número de dobras que ele deseje que sejem feitas. Logo após isso, iremos iniciar duas variáveis como as dimensões, 
	originais, do papel A0. Logo após, faz-se um laço de repetição que realize tantas dobras quanto o usuário pediu, sendo
	que cada dobra consistirá, como já foi dito, em dividir ao meio a maior parte. 

	Por fim, basta imprimir os valores obtidos para Largura e Altura dos novos papéis.

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
	// LETRA A
	// ------------------------------------
	// Variáveis para a Letra A
	float A0largura, A0altura;

	// Vamos começar igualando as dimensoes do A0 com o A4, e realizando
	// diversas "desdobras" pra aumentarmos o tamanho de A4 até o A0.
	A0largura = 21; A0altura = 29.7;

	for(int i = 0; i < 4; i++)
	{
		if(A0largura < A0altura)
			A0largura *= 2;
		else
			A0altura *= 2;
	}

	cout << "Dimensoes do A0: " << A0largura << "x" << A0altura << endl;

	// LETRA B
	// ------------------------------------
	// Variáveis para a Letra A
	float AXlargura, AXaltura;
	int numDobra;

	// Pedimos para o usuário digitar o número da dobra que ele deseja
	cout << "\nDigite o Número da Dobra: ";
	cin >> numDobra;

	// Vamos começar igualando as dimensoes do AX com o A0, e realizando
	// diversas dobras pra diminuirmos o A0 até o tamanho da dobra que queremos.
	AXlargura = A0largura; AXaltura = A0altura;

	for(int i = 0; i < numDobra; i++)
	{
		if(A0largura > A0altura)
			A0largura /= 2;
		else
			A0altura /= 2;
	}

	cout << "\nDimensoes do A" << numDobra << " = " << A0largura << "x" << A0altura << endl;

	return 0;
}