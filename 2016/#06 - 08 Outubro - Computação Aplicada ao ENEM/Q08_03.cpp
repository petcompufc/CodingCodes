// Enunciado da Questão:
/*
	Uma barraca de tiro ao alvo de um parque de diversões dará um prêmio de R$20,00 ao participante, cada vez que
	ele acertar o alvo. Por outro lado, cada vez que ele errar o alvo, deverá pagar R$10,00. 
	Não há cobrança inicial para participar do jogo.

	Faça um programa que calcule a quantidade de vezes que o participante acertou o alvo, tendo a quantidade 
	de tiros totais e o valor de recompensa como entradas.
*/

// Observações do Tio Minho:
/*
	Nessa questão, temos apenas duas informações: a quantidade de tiros (totais) que o participante deu
	e o dinheiro total que ele recebeu como recompensa.

	Existem diversas lógicas para descobrir a quantidade de tiros certos.
	Uma lógica bastante simples consiste em considerar, só temporariamente, que o participante acertou 
	todos os tiros. Nesse caso, ele vai receber a recompensa máxima (20 * quantidade de tiros).

	Para descobrirmos, então, quantos tiros ele acertou, basta irmos decrementando essa recompensa máxima
	de 10 em 10 (cada R$10 corresponde a um tiro errado), até que o valor seja igual à recompensa real recebida.
	Contando a quantidade de decrementos, saberemos quantos tiros ele errou; e subtraindo essa quantidade do
	número total de tiros, teremos a quantidade de acertos.

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
	// Criamos as variáveis correspondente à quantidade total de tiros, a recompensa total, e a quantidade de erros
	// (que calcularemos).
	int qtdTotal, recompensa; 
	int recompensaMaxima, qtdErros = 0;

	cout << "Digite a quantidade total de tiros: ";
	cin >> qtdTotal;

	cout << "Digite a recompensa recebida: ";
	cin >> recompensa;

	// Vamos, então, calcular a Recompensa Máxima (que seria o participante acertar todos os tiros)
	recompensaMaxima = qtdTotal * 20;

	// E, então, vamos decrementar essa quantidade até que ela seja igual à recompensa informada.
	// Vamos contabilizar cada decremento como um tiro errado.
	while(recompensaMaxima != recompensa)
	{
		recompensaMaxima -= 10;
		qtdErros++;
	}

	// Por fim, imprimimos a quantidade de acertos (total - erros)
	cout << "Quantidade de Tiros Certos: " << (qtdTotal - qtdErros) << endl;

	return 0;
}