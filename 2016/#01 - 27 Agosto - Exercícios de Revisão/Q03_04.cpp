// Enunciado da Questão:
/*
	Crie uma função que converta números decimais em números binários.
*/

// Observações do Tio Minho:
/*
	Mais um exercício matemático.

	A lógica desse programa é um pouco diferente das anteriores, apesar de usar os mesmos operadores.
	Dessa vez, usaremos um clássico algoritmo para fazer a conversão Decimal-Binário.

	A conversão consiste no seguinte algoritmo:
		1. Divida o número decimal por 2 (divisão inteira) e armazene o resultado numa variável X;
		2. Multiplique o resto por 10 elevado ao número de vezes que houver uma divisão;
		3. Some o resto a uma variável;
		4. Repita o processo, agora usando a variável X como entrada.

	Um exemplo de conversão:
	241 -> Binário

	241 | 2  -> Resto == 1. Multiplique por 10^0
	120 | 2  -> Resto == 0. Multiplique por 10^1
	 60 | 2  -> Resto == 0. Multiplique por 10^2
	 30 | 2  -> Resto == 0. Multiplique por 10^3
	 15 | 2  -> Resto == 1. Multiplique por 10^4
	  7 | 2  -> Resto == 1. Multiplique por 10^5
	  3 | 2  -> Resto == 1. Multiplique por 10^6
	  1      -> Resto == 1. Multiplique por 10^7 

	Se à medida que você foi multiplicando os restos por essas potências de 10 você foi armazenando
	o resultado em uma variável, digamos, "binario", então "binario" já corresponde ao restulado
	da conversão.

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <math.h>

// Comando para omitir o "sf::"
using namespace std;

// Função Conversora Decimal-Binário
int conversorBinario(int decimal)
{
	// Iremos criar três variáveis: uma para armazenar os resultados das divisões,
	// outra para contar quantas divisões foram feitas e outra para armazenar o 
	// resultado da conversão.
	int quociente = decimal, numDivisoes = 0;;
	int binario = 0;

	// Enquanto a divisão por 2 for possível, iremos realizar o algoritmo
	while(quociente != 0)
	{
		binario += (quociente % 2) * pow(10, numDivisoes);	// Multiplica-se o resto pela potência de 2 e soma-se à variável "binário"
		quociente /= 2;										// Divide-se o quociente para o próximo laço
		numDivisoes++;										// Incrementa-se o número de divisões feitas
	}

	return binario;
}

// Programa Principal de Testes
int main()
{

	cout << conversorBinario(13) << endl;		// Resultado: 1101
	cout << conversorBinario(241) << endl;		// Resultado: 11110001
	cout << conversorBinario(10) << endl;		// Resultado: 1010
	cout << conversorBinario(75) << endl;		// Resultado: 1001011

	return 0;
}