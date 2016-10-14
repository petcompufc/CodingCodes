// Enunciado da Questão:
/*
	Crie uma função que converta números em binário para decimal.
*/

// Observações do Tio Minho:
/*
	Outro clássico exercício para exercitar a matemática

	Na observação da questão Q03_02 nós vimos como usar o operador "%" para isolarmos o final de um número.
	Basicamente, o que é o operador "%" faz, quando usado com uma potência de 10, é ignorar os dígitos que aparecem à esquerda.

	E se eu lhe dissesse que é possível ignorar os dígitos que aparecem à direta dos números? É bastante simples, e você
	talvez já saiba: usaremos o operador de divisão "/" e o divisor será potências de 10.

	A lógica é idêntica à observada no operador "%". O número de zeros da potência de 10 é igual ao número de dígitos que nós
	iremos ignorar, a partir da esquerda, do número dividido. Por exemplo, imagine que estamos dividindo 1556 por 10, o resultado
	será 155. Ignoramos apenas o número "6" porque o divisor, 10, tem apenas um zero.

	A "regrinha" que podemos ditar é que a operação "/" por uma potência de 10 irá "ignorar" apenas os mesmo
	tanto de números iguais ao tanto de zeros que tiver na potência de 10.
	x / 10 -> Ignora o último dígito do número (porque 10 só tem um zero).
	x / 100 -> Ignora os dois últimos dígitos do número  (porque 100 tem dois zeros).
	x / 1000 -> Ignora os três últimos dígitos do número  (porque 1000 tem três zeros).
	[...]
	x / 10^n -> Ignora os n últimos dígitos do número  (porque 10^n tem "n" zeros).

	Então, podemos usar a operação "/", junto com a operação "%" para escolheremos um dígito específico de um número. Veja:
	Para selecionarmos o 2º Dígito:
	1556 / 10 == 155
	155 % 10 == 5

	Para selecionarmos o 3º Dígito:
	1556 / 100 == 15
	15 % 10 == 5

	E assim por diante...

	Agora, a parte que cabe à questão: Como converter números de Binário para Decimal?
	É bem simples. Nós iremos multiplicar cada dígito do número por 2 elevado ao número da "casa" do número.
	Somando os resultados de cada multiplicação nós teremos o resultado em decimal. Observe:

	1011001 = 1 0 1 1 0 0 1 = 1*2^6	+ 0*2^5	+ 1*2^4	+ 1*2^3	+ 0*2^2	+ 0*2^1	+ 1*2^0 
							= 1*64 + 0*32 + 1*16 + 1*8 + 0*4 + 0*2 + 1*1 
							= 64 + 16 + 8 + 1 
							= 89 

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <math.h>

// Comando para omitir "std::"
using namespace std;

// Conversor Binário (essa é a forma otimizada mais simples)
int conversorDecimal(int binario)
{
	int decimal = 0;
	int coluna = 0;

	// Do mesmo jeito da questão anterior, vamos fazer o "i" variar em potências de 10.
	// A condição de parada será quando o "binario" dividido por "i" for menor que zero (ou seja, o fim do número).
	for(int i = 1; (binario / i) > 0; i *= 10)
	{
		// Incremetamos "decimal" com o valor do dígito multiplicado pelo número da "casinha" do dígito
		decimal += (binario / i) % 10 * pow(2, coluna);
		coluna++;			// Incrementamos o valor da "casinha" 
	}

	return decimal;
}

// Programa Principal de Teste
int main()
{
	cout << conversorDecimal(1011001) << endl;		// Resultado: 89
	cout << conversorDecimal(1101) << endl;			// Resultado: 13
	cout << conversorDecimal(101) << endl;			// Resultado: 5
	cout << conversorDecimal(100000000) << endl;	// Resultado: 256

	return 0;
}