// Enunciado da Questão:
/*
	Um granjeiro detectou uma infecção bacteriológica em sua criação coelhos! A massa de cada coelho é de,
	aproximadamente, 4 kg. Um veterinário prescreveu a aplicação de um antibiótico, que pode ser comprado em
	frascos de 16mL, 25mL, 100mL, 400mL ou 1600mL. Para coelhos, deve-se aplicar uma dose única de 0.25 mL 
	para cada kg de massa do animal. 

	Sabendo que quanto maior o volume do frasco, mais caro é o	remédio, faça uma função que receba uma 
	quantidade “X” de coelhos e escolha o frasco a ser comprado de forma a ter maior economia e que seja
	suficiente para todos os coelhos.
*/

// Observações do Tio Minho:
/*
	Essa questão pode ser facilmente solucionada calculando-se a quantidade necessária de antibiótico para a
	granja, que é equivalente a:

			4 * 0.25x = x mL 	(x é a quantidade de coelhos)

	Ou seja, a quantidade de remédio é igual à quantidade de coelhos!

	Então, se faz uma série de condicionais para testar se "x" é menor que o valor de cada frasco, começando
	do menor ao último frasco disponível.
	A primeira condicional verdadeira, será o frasco que deverá ser escolhido.

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
	int qtdCoelhos;

	cout << "Digite a quantidade de coelhos: ";
	cin >> qtdCoelhos;

	if(qtdCoelhos <= 16)
		cout << "Escolha o frasco de 16mL!" << endl;
	else if(qtdCoelhos > 16 && qtdCoelhos <= 25)
		cout << "Escolha o frasco de 25mL!" << endl;
	else if(qtdCoelhos > 25 && qtdCoelhos <= 100)
		cout << "Escolha o frasco de 100mL!" << endl;
	else if(qtdCoelhos > 100 && qtdCoelhos <= 400)
		cout << "Escolha o frasco de 400mL!" << endl;
	else if(qtdCoelhos > 400 && qtdCoelhos <= 1600)
		cout << "Escolha o frasco de 1600mL!" << endl;

	return 0;
}