// Enunciado da Questão:
/*
	Vamos tornar nosso Caixa mais real!
	
	Com o código já construído anteriormente, vamos fazer a seguinte modificação:
		1. O preço de qualquer produto que custe mais de R$100 possui um imposto de 10% sobre seu valor.
		2. O preço de qualquer produto que custe mais de R$500 possui um imposto de 5% sobre seu valor.
		3. Como você é bomzinho, você dará um desconto de 15% no valor total caso a compra custe mais que R$1000

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
	float precoUnitario = 0, precoTotal = 0;

	while(precoUnitario != -1)
	{
		cout << "Digite o preco do Produto: ";
		cin >> precoUnitario;

		if(precoUnitario > 0)
		{
			if(precoUnitario > 100)
				precoTotal += precoUnitario * 1.10;
			else if(precoUnitario > 500)
				precoTotal += precoUnitario * 1.50;
		}
		else
			cout << "Valor Inválido" << endl;
	}

	if(precoTotal > 1000)
		precoTotal *= 0.85;

	cout << "Preco Total: " << precoTotal << endl;

	return 0;
}