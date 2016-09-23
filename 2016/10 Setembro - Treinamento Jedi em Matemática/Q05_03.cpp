// Enunciado da Questão:
/*
	Problema:

	Dados um número inteiro “n” e dois números inteiros positivos
	“i” e “j”, diferentes de 0, imprimir em ordem crescente os n
	primeiros naturais que são múltiplos de i OU de j E de ambos.
*/

// Observações do Tio Minho:
/*
	A lógica dessa questão se assemelha bastante à da questão Q05_03.cpp

	Nós iremos fazer o seguinte:
	Primeiramente, iremos pedir para o usuário digitar os valores de "n", "i" e "j".
	A variável "n" representa a quantidade de números que queremos imprimir. Se (n == 5), isso
	significa que iremos imprimir 5 números diferentes.

	Quais serão esses números? Iremos imprimir os "n" menores números que sejam divisíveis por "i", "j" ou ambos;
	ou seja, imaginando que esse número seja um tal "X", queremos imprimir os menores números tais que
	
		(X % i == 0) OU (X % j == 0)

	Como não sabemos quais são esses números, nós dificilmente iremos conseguir utilizar um "for" para controlar nossas impressões
	(apesar de haver como utilizá-lo). Vamos precisar, então, de um "while" que usaremos para "loopar" um número qualquer (que vamos
	chamar de "i") de 1 até infinito. Só iremos parar o "while" quando a quantidade de impressão que fizermos for igual a "n".

	Perceba que seria necessário a utilização de um contador para tentar verificar se esse contador é igual a "n", e então parar o "for",
	mas vamos mostrar uma abordagem onde utilizaremos o próprio "n" como a variável de contagem: vamos decrementar a variável toda vez
	que fizermos uma impressão. Quando a variável for igual a 0 (zero), então teremos feito todas as impressões que queríamos.

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
	// Vamos criar as variáveis que serão utilizadas
	int i, j, n;
	int X = 1;		// Essa variável representará nossos "números" do while, que irá de 1 até infinito (ou até o while parar)

	// Pediremos para o usuário digitar os valores de "i", "j" e "n".
	cout << "Digite o valor de 'n': ";
	cin >> n;

	cout << "Digite o valor de 'i': ";
	cin >> i;

	cout << "Digite o valor de 'j': ";
	cin >> j;

	// Vamos, agora, fazer nosso "while" que deverá incrementar "X" até o infinito. Se encontrarmos um "X" tal que (X % i == 0) OU (X % j == 0),
	// então iremos imprimir seu valor e decrementar a variável "n". Quando "n" for igual a zero, iremos parar nosso while.
	while(n > 0)
	{
		if((X % i == 0) || (X % j == 0))
		{
			cout << X << ";";
			n--;
		}

		X++;
	}

	cout << endl;
	return 0;
}
