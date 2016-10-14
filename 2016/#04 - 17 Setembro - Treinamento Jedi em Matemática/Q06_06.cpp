// Enunciado da Questão:
/*
	Faça um programa que receba, do usuário, um número do tipo double e, então, imprima esse 
	número em notação científica (multiplicado por potência de 10).
 
	Ex.: 1566,78 --→ 1,56678.10³
		 0,0015 ---→ 1,15.10⁻³
		 1 -----------→ 1.10⁰
*/

// Observações do Tio Minho:
/*
	A solução depende de que o aluno perceba que a notação científica é feita por uma sequência
	de divisões/multiplicações.

	* Se o número depois da vírgula for maior que 10, dividi-se esse número por 10 até que o número
	  depois da vírgula seja menor que 10.

	* Se o número depois da vírgula for igual a 0, multiplica-se esse número por 10 até que o número
	  depois da vírgula seja maior que 0.

	Se criarmos uma variável para armazenar a quantidade de multiplicações, podemos fazer um incremento
	(variavel++) sempre que fizermos uma divisão, e um decremento (variavel--) sempre que fizermos uma
	multiplicação.

	Lembre-se que um número dividido por 10 é igual ao mesmo resultado da divisão multiplicado por 10.
	Ou seja,

			x / 10  ==  0.x * 10

	Por isso que divisões aumentam o expoente, e multiplicações diminuem.

	Por fim, basta imprimir o valor das divisões, seguidos de um 10^[valorDoExpoente].
	
	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:
// Bibliotecas
#include <iostream>
#include <time.h>
#include <stdlib.h>

// Comando para omitirmos o "std::"
using namespace std;

// Programa Principal
int main()
{
	// Primeiramente, criamos as variáveis
	int expoente = 0;
	double number;

	// Pedimos para que o usuário digite o número desejado
	cout << "Digite o numero: ";
	cin >> number;

	// Agora, iremos fazer um laço para dividir o número depois da vírgula até
	// que o mesmo seja menor que 10. 
	// Para sabermos qual o número que vem após a vírgula, basta converter o número
	// para inteiro usando o cast "(int)number".
	while((int)number > 10 || (int)number < -10)	// O caso do "-10" é necessário para números negativos.
	{
		number /= 10;
		expoente++;
	}

	// Faremos, agora, um laço para caso o número tenha o valor zero após a vírgula
	while((int)number == 0)
	{
		number *= 10;
		expoente--;
	}

	// Imprimos, então, o número em notação científica:
	cout << "Notacao Cientifica: " << number << "*10^" << expoente << endl;
	

	return 0;
}