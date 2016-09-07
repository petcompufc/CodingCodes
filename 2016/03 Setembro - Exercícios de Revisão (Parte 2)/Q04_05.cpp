// Enunciado da Questão:
/*

	Faça uma função que receba como parâmetro três inteiros: ano, mês e dia. Sua função, então, deve calcular a 
	quantidade de dias de 03/09/2016 até o dia recebido como parâmetro.
 
	Obs.: Faça um tratamento de erro para que o usuário não digite uma data que seja anterior à data atual.
 
	Obs2.: Não se preocupe com anos bissextos.

*/

// Observações do Tio Minho:
/*
	Essa função tende a ser um pouco desafiador à primeira vista, então preste bem atenção...

	Primeiramente, vamos falar sobre o Tratamento de Erro. A função a ser implementada deve GARANTIR que a data
	que o usuário irá digitar deve ser posterior à data inicial (03/09/2016), pois, caso contrário, a lógica do
	algoritmo não funcionará. O Tratamento de Erro é bem simples, basicamente devemos certificar esses três casos:

		1. O valor do parâmetro "ANO" não pode ser menor que 2016;
		2. Se o valor do parâmetro "ANO" for igual a 2016, então o valor do parâmetro "MÊS" não pode ser menor que
		   9;
		3. Se o valor do parâmetro "ANO" for igual a 2016 e o valor do parâmetro "MẼS" for igual a 9, então o valor
		   do parâmetro "DIA" não pode ser menor que 3.

	Para a lógica do programa em si, existem diversas abordagens. Algumas são fáceis de se pensar, mas seus códigos
	não possuem um desempenho tão bom. Para esses casos, no entanto, isso não chega a ser um peso muito grande.
	Existe, também, outra lógica, mais otimizada, que exige, porém, uma melhor visão por parte do programador.
	Vamos falar das duas abordagens:

	Primeira Abordagem: Contagem.
		- A primeira abordagem consiste em fazer três "for"s, um para "ANO", outro para "MÊS" e outro para "DIA", e
		  concatenar essas três estruturas uma dentro da outra, na sequência que foram inscritas. Os "for"s vão sempre
		  começar dos valores "atuais" da data, e vão ter como limite os valores informados pelo usuário. Cria-se, 
		  então, uma variável para ser incrementada a todas as iterações do "for" de "DIA". Essa variável será, no fim,
		  o valor de dias de diferença entre a data atual e a informada.
		  Essa abordagem não é muito boa porque três "for"s concatenados é uma estrutura bastante pesada, se os valores
		  de diferença forem muito grandes.

	Segunda Abordagem: Cálculo.
		- A segunda abordagem possui um desempenho mais rápido, mas nem sempre é a primeira solução pensada. Nela, nós
		  iremos calcular a diferença de anos e multiplicar por 365. Esse será nosso valor inicial conhecido de dias.
		  Nós iremos, então, calcular a diferença de meses. Vamos fazer um "for" para percorrermos essa diferença e
		  verificando se o mês possui 30, 31 ou 28 dias, e vamos somando essa quantidade de dias na variável. Se o mês
		  informado for menor que o mês atual, fazemos o mesmo procedimento, só que invertemos o "for" e, ao invés de
		  soma, iremos subtrair os dias. Finalmente, na variável de dias iremos apenas somar (se o informado for maior)
		  ou subtrair (se o informado for menor) a diferença direto na variável.
		

	Iremos implementar, nesse código, a segunda abordagem.

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>

// Comando para omitirmos o "std::"
using namespace std;

// Função de Calcular diferença de Dias
int qntDays(int year, int month, int day)
{
	if(    year < 2016														// Se o ano for menor que 2016...
	   || (year == 2016 && month < 9)										// Ou se o mês for igual a 2016 e menor que 9...
	   || (year == 2016 && month == 9 && day < 3)							// Ou se o ano for igual a 2016, o mês for igual a 9 e o dia for menor que 3...
	   || (month > 12 && month < 0) || (day > 31 && day < 0))				// Ou se os valores de Mês ou Dia forem inválidos...
		return -1;															// Então retornamos um valor de erro (-1).
	else
	{
		// Caso contrário, faremos a comparação das datas...

		// 2ª Abordagem:
		int dias = 0;

		// Quantidade inicial pelo ano.
		dias += (year - 2016) * 365;

		// Quantidade calculada pelos meses
		if(month > 9)	// Se o mês informado for maior que o atual...
		{
			for(int mes = 9; mes < month; mes++)
			{
				if(mes == 2)	// Se o mês for Fevereiro
					dias += 28;
				else if((mes < 8)) 	// Se o mês for menor que Agosto
				{
					if(mes % 2 == 0)
						dias += 30;		// Se o mês for par.
					else
						dias += 31;		// Se o mês for ímpar.
				}
				else				// Se o mês for a partir de Agosto
				{
					if(mes % 2 == 0)
						dias += 31;		// Se o mês for par.
					else
						dias += 30;		// Se o mês for ímpar.
				}
			}
		}
		else			// Se o mês informado for menor que o atual...
		{
			// Ps.: É exatamento o mesmo código do "if" daqui de cima, só com a diferença de que
			// o "for" está invertido (note o sinal de ">" e o "mes--", e invés de soma estamos 
			// subtraindo o número de dias.
			for(int mes = 9; mes > month; mes--)
			{
				if(mes == 2)	// Se o mês for Fevereiro
					dias -= 28;
				else if((mes < 8)) 	// Se o mês for menor que Agosto
				{
					if(mes % 2 == 0)
						dias -= 30;		// Se o mês for par.
					else
						dias -= 31;		// Se o mês for ímpar.
				}
				else				// Se o mês for a partir de Agosto
				{
					if(mes % 2 == 0)
						dias -= 31;		// Se o mês for par.
					else
						dias -= 30;		// Se o mês for ímpar.
				}
			}
		}

		// Por fim, vamos somar a diferença de dias
		if(day > 3)
			dias += (day - 3);
		else
			dias -+ (3 - day);

		return dias;
	}
}

// Função Main para Testes
int main()
{
	cout << qntDays(2017, 1, 25) << endl;

	return 0;
}