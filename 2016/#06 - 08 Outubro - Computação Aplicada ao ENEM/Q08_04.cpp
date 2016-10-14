// Enunciado da Questão:
/*
	Uma fábrica vende pizzas congeladas de tamanhos médio e grande, cujos diâmetros são, respectivamente, 30cm e 40cm.
	Fabricam-se apenas pizzas de sabor muçarela. Sabe-se que o custo com os ingredientes para a preparação é diretamente
	proporcional ao quadrado do diâmetro da pizza, e que na de tamanho médio esse custo é de R$1,80 e na de tamanho grande
	o custo é de R$3,20. Além disso, todas possuem um custo fixo de R$3,00 referente às demais despesas da fábrica.


	Faça um programa que:
		a) Calcule o valor das pizzas para que o dono da fábrica tenha um lucro “X”, especificado como entrada.
		b) Modifique o código para que o usuário também tenha que informar o valor do diâmetro da Pizza. Encontre
		   o valor de preparação das Pizzas para qualquer valor de diâmetro.
*/

// Observações do Tio Minho:
/*
	Uma equação simples, de lucro, para uma venda simples consiste em:

		lucro = preço - custo

	Se quisermos saber qual preço nos dará certo lucro, podemos transformar a equação em:

		preço = lucro + custo

	Para o problema de Letra A, basta pedirmos o valor desejado de lucro e, usando a expressão acima, calcular
	o preço de cada pizza - a de 30cm e a de 40cm.

	Para o problema de Letra B, teremos que descobrir uma fórmula geral para calcular o custo de uma Pizza com base
	no seu diâmetro. Como a própria questão nos informa, o custo de preparação é diretamente proporcional ao quadrado
	do diâmetro da Pizza.
	Se fizermos uma observação básica, podemos descobrir que existe uma relação entre preço e diâmetro da seguinte forma:

		preço = 0.002 * (diâmetro)^2

	Percebam, por exemplo, que essa função é verdadeira tanto para o tamanho médio como grande:

		30cm --> preço = 0.002 * (30^2) = 0.002 * 900  = R$1.80
		40cm --> preço = 0.002 * (40^2) = 0.002 * 1600 = R$3.20
		  
	Então, 


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
	// Criaremos as variáveis para armazenar o valores do lucro (Letra A) e do diâmetro (Letra B).
	float lucro, diametro;

	// LETRA A: pediremos o valor do lucro e exibiremos o preço que deve ser vendido.
	cout << "Digite o valor de lucro desejado: ";
	cin >> lucro;

	cout << "A pizza media devera ser vendida por R$ " << (2.3 + lucro) << " e a pizza grande devera ser vendida por R$ " << (3.2 + lucro) << "." << endl;

	// LETRA B: pedimos para que o usuário digite o valor do diâmetro e calculamos o valor do preço a ser vendido.
	cout << "Digite o valor do diâmetro da pizza: ";
	cin >> diametro;

	cout << "Digite o valor do lucro desejado: ";
	cin >> lucro;

	cout << "A pizza de " << diametro << "cm de diametro devera ser vendida por R$ " << ((0.002 * diametro * diametro) + lucro) << "." << endl;

	return 0;
}