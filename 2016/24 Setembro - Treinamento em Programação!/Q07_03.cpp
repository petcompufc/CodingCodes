// Enunciado da Questão:
/*
	Vamos brincar um pouco com strings!

	Criemos um programa que receba uma String qualquer como entrada (apenas uma palavra). 
	Vamos fazer	três brincadeiras com essa string: 
		1. Imprimir a string invertida.
		2. Contar quantas vogais e consoantes há na palavra.
		3. Cebolinha: trocar todos os “r” por “l”.
*/

// Observações do Tio Minho:
/*

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
	string palavra;

	cout << "Digite uma palavra: ";
	cin >> palavra;

	// Invertendo a Palavra:
	string invertida = palavra;
	for(int i = 0; i < invertida.length() / 2; i++)
	{
		char aux = invertida[i];
		invertida[i] = invertida[(invertida.length() - 1) - i];
		invertida[(invertida.length() - 1) - i] = aux;
	}

	cout << invertida << endl;

	// Contando vogais e consoantes
	int vogais = 0, consoantes = 0;

	return 0;
}