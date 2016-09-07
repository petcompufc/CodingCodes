// Enunciado da Questão:
/*

	Faça uma função que receba, como parâmetro, um Vetor de de 30 Numeros do tipo Inteiro.

	Sua função deve, então, retornar o maior número número primo entre os outros.
 
	Se não houver nenhum número primo, a função deve retornar apenas o valor 0 (zero).

*/

// Observações do Tio Minho:
/*
	Por mais que parece complicado, essa função é bastante simplória.

	Nós só iremos receber o Vetor como parâmetro. Uma forma interessante de resolver esse problema é ordenador o Vetor e
	buscar pelo último elemento primo que estiver no mesmo vetor ordenado.
	Existem inúmeros algoritmos de ordenação. Existem alguns bem simples tais como o Bubble Sort e o Insertion Sort.

	Para nosso problema, no entanto, basta irmos pesquisando os maiores termos e verificando se os mesmos são primos.
	Vamos sempre armazenando o índice do "maior primo" em uma variável. Se encontrarmos outro número primo que seja maior
	do que o nós temos armazenados, atualizaremos o valor dessa variável com o índice desse novo primo.

	Iremos precisar, para a solução, apenas de um função auxiliar que verifique se um número é primo, e a função principal	
	que será composta de apenas 1 "for" que irá varrer o vetor em busca do índice do "maior primo".
	No fim desse "for", basta retornamos o elemento do vetor que tiver aquele índice, ou, caso não há nenhum elemento primo,
	retornarmos o número 0.

	Observe o código com atenção

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>

// Comando para omitirmos o "std::"
using namespace std;


bool testePrimo(int num)
{
	// Para verificarmos se um número é primo, basta verificarmos quantos divisores de 2 até 9 dividem o número.
	// Se pelo menos um desses divisores dividirem o número, E O NÚMERO NÃO FOR IGUAL A ELE, então o número NÃO é primo.
    for(int j = 2; j <= 9; j++)
        // Se o resto da divisão entre o número e o divisor for 0 e o número NÃO É IGUAL ao divisor...
        if(num % j == 0 && num != j)
            return false;

    return true;
}

// Função de Calcular diferença de Dias
int maxPrimo(int vetor[30])
{
    // Vamos fazer a função com apenas 1 "for"!
    // Esse "for" varrerá todos os elementos do Vetor e irá buscar o índice do maior de todos, que seja um Número Primo,
    // armazenando esse índice na variável "indiceMaior".
    int indiceMaior = 0;

	for(int i = 0; i < 30; i++)
	{
		// Nesse "if" nós estamos verificando se o número é maior que o temos armazenado.
		if(vetor[i] > vetor[indiceMaior]) 
			// Se ele for maior, agora veremos se esse número é um Número Primo
			if(testePrimo(vetor[i]))		// Se o número for Primo...
				indiceMaior = i;			// Armazenamos seu valor
    }

	// Se nenhum número for Primo, retornamos 0.
	if(indiceMaior < 30)
		return vetor[indiceMaior];

	// Se nenhum número for Primo, retornamos 0.
	return 0;

}

// Função Main para testar a Função
int main()
{
	int vetor[30];

	for(int i=0; i<30; i++)
		vetor[i] = i-3;

	cout << "O maior eh: " << maxPrimo(vetor);

	return 0;
}