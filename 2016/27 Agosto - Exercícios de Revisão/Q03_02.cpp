// Enunciado da Questão:
/*
	Crie uma função chamada “Encaixa” que verifica, para dois inteiros A e B, se B é igual ao final de A.
*/

// Observações do Tio Minho:
/*
	Esse exercício é um bom exercício para habilidades matemáticas e de raciocínio.
	Ela é um pouco complicado, então preste atenção nessas observações e no código-fonte!

	Primeiramente, vamos falar sobre o operador "%". Esse operador, chamado de "resto da divisão", nos retorna o resto da divisão
	De um número por um inteiro. Assim, por exemplo, se dividirmos 7 por 3, nós teremos o quociente 2 e o resto 1. Em código, isso
	significa que "7/3 == 2" e que "7%3 == 1".
	Esse operador tem uma utilidade muito notável quando o número 10 é seu dividendo. Imagine que você tem o número 13556. Se você
	pegar esse número e fazer uma divisão inteira por 10, terá um resto igual ao último número: 6. Ou seja, 13556 % 10 == 6.
	Pode fazer o teste no papel! Da mesma forma, se você fizer a operação 13556 % 100, o resultado será 56. 

	A "regrinha" que podemos ditar é que a operação "%" quando na direita estiver uma potência de 10 irá "escolher" apenas os mesmo
	tanto de números iguais ao tanto de zeros que tiver na potência de 10.
	x % 10 -> Escolhe o último dígito do número (porque 10 só tem um zero).
	x % 100 -> Escolhe os dois últimos dígitos do número  (porque 100 tem dois zeros).
	x % 1000 -> Escolhe os três últimos dígitos do número  (porque 1000 tem três zeros).
	[...]
	x % 10^n -> Escolhe os n últimos dígitos do número  (porque 10^n tem "n" zeros).

	Entendeu? Ou seja, podemos usar o operador "%" para sabermos como é o final de um número, sendo que nós escolhemos quantos
	dígitos esse "final" vai ter.

	Para completarmos a questão, descobrindo se B "encaixa" em A, basta nós sabermos quantos dígitos tem o número "B" e depois
	comparamos esse número como final de A, usando A % 10^x onde "x" é o número de dígitos de B.

	Como descobrir quantos dígitos tem o número B? Simples! Basta dividí-lo por 10 até ele ser igual a zero. A quantidade de 
	vezes que você dividí-lo é igual à quantidade de dígitos que o número possui :)

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <math.h>

// Comando para omitir o "std::"
using namespace std;

// Função "Encaixa" #Primeira Versão
void encaixa(int A, int B)
{
	// Primeiramente, nós podemos verificar se "B" é maior que "A". Se ele for, já sabemos que não encaixa.
	if(B > A)
	{
		cout << "Nao encaixa!" << endl;
	}
	else
	{
		// Vamos contar quantos dígitos tem o número "B".
		int qtdDigitos = 1, copiaB = B;

		while(copiaB / 10 != 0) // Enquanto "copiaB" for diferente de zero.
		{
			copiaB /= 10;		// "copiaB" receberá ele mesmo dividido por 10.
			qtdDigitos++;		// E contamos um dígito, incrementando "qtdDigitos"
		}

		// Quando esse "while" acima acabar, teremos armazenados em "qtdDigitos" o número de dígitos de B.
		// Então, nos resta só comparar:
		if(A % (int)pow(10, qtdDigitos) == B)
			cout << "Encaixa!" << endl;
		else
			cout << "Nao encaixa!" << endl;
	}
}

// Função "Encaixa" #Segunda Versão
// Também é possível utilizar outra lógica (mais simples) para atingir o mesmo objetivo.
// Nós iremos fazer o resto de A e B por potências de 10 e comparar vez-por-vez se esses
// restos são iguais. Se nós encontrarmos pelo menos um caso onde esses restos são diferentes,
// então os dois números não se encaixam.
// Para fazer um "for" se mover em potências de 10 basta usar "i*=10" ao invés de "i++"
// A nossa condição de parada será quando B dividido por uma certa potência de 10 e o resultado for igual a zero.
void encaixa2(int A, int B)
{
	// Preste atenção à Condição de Continuação (operação do meio do "for")!
	for(int i = 10; B / i > 0; i *= 10) 
	{
		// Se os restos forem diferentes, então já sabemos que não Encaixa. E então nós já damos um "return" pra terminar a função
		if((A % i) != (B % i))
		{
			cout << "Nao encaixa!" << endl;
			return;
		}
	}

	// Se a execução veio até aqui, é porque verificaram todas os restos da divisão e não tinha nenhum diferente, então
	// B encaixa em A!
	cout << "Encaixa!" << endl;
}

// Programa Principal para Testes
int main()
{
	// Deve encaixar
	encaixa(1556, 56);
	encaixa2(1556, 56);

	// Não deve encaixar
	encaixa(154, 255);
	encaixa2(154, 255);

	// Deve encaixar
	encaixa(154, 154);
	encaixa2(154, 154);

	// Não deve encaixar
	encaixa(1154, 255);
	encaixa2(1154, 255);

	return 0;
}