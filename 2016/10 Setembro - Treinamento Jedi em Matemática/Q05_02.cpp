// Enunciado da Questão:
/*
	Problema (katchau):

	É preciso, sabendo a velocidade máxima permitida em uma avenida e a
	velocidade com que um motorista estava dirigindo nela,
	calcular a multa que esse motorista vai receber, sabendo que
	são pagos:

		a) 50 reais se o motorista estiver ultrapassar em até 10km/h a
		velocidade permitida (ex.: velocidade máxima: 50km/h; motorista a
		60km/h ou a 56km/h);

		b) 100 reais + 5 reais por km/h ultrapassado, se o motorista
		ultrapassar de 11 a 30 km/h a velocidade permitida.

		c) 200 reais + 10 reais por km/h ultrapassado, se estiver acima de
		31km/h da velocidade permitida.

*/

// Observações do Tio Minho:
/*
	Essa questão consiste simplesmente num conjunto de verificações sobre a velocidade limite em uma certa avenida.
	Vamos dizer, por exemplo, que nós temos um limite de velocidade (que vamos chamar "velMax") igual a velMax = 80.
	(Com isso, queremos dizer que a velocidade máxima permitida na avenida é igual a 80 Km/h)

	O problema consiste em saber o QUANTO o motorista ultrapassou a velocidade máxima permitida (se é que ele ultrapassou),
	e aplicar uma multa (basta imprimir o valor) de acordo.
	Sabemos que a multa será:

		multa = 50 reais  	----> caso a diferença entre a velocidade do motorista e a máxima permitida seja menor que 10 (ou seja,
							   	  o motorista ultrapassou até 10 Km/h a velocidade máxima).
		multa = 100 + 5*x 	----> caso a diferença entre a velocidade do motorista e a máxima permitida esteja entre 11 e 30; sendo
								  "x" o valor da própria diferença.
		multa = 200 + 10*x 	----> caso a diferença entre a velocidade do motorista e a máxima permitida seja maior que 30; sendo
								  "x" o valor da própria diferença.

	O código consiste, então, em calcular e imprimir a multa resultado de cada caso.
	Para dinamizar o código e permitir vários exemplos, vamos deixar que o usuário digite o valor da velocidade máxima e da velocidade
	do motorista.

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
	// Variáveis
	int velMax, velMotorista;
	int multa = 0;

	// Vamos pedir que o usuário preencha os valores das variáveis
	cout << "Digite o valor da velocidade máxima: ";
	cin >> velMax;

	cout << "Digite o valor da velocidade do motorista: ";
	cin >> velMotorista;

	// Vamos, então, criar uma variável que armazena a diferença entre as duas variáveis e verificar cada caso para essa
	// tal diferença:
	int ultrapassagem = velMotorista - velMax;

	// 1º Verificação: ultrapassagem é positiva -> significa que o motorista ultrapassou a velocidade permitida. 
	// Se fosse negativa, ele não teria ultrapassado
	if(ultrapassagem > 0)
	{
		// Caso a) --> A ultrapassagem é de até 10 Km/h
		if(ultrapassagem <= 10)
			multa = 50;
		// Caso b) --> A ultrapassagem está entre 11 e 30 Km/h
		else if(ultrapassagem > 10 && ultrapassagem <= 30)
			multa = 100 + 5*ultrapassagem;
		// Caso c) --> A ultrapassagem é superior a 30 Km/h
		else if(ultrapassagem > 30)
			multa = 200 + 10*ultrapassagem;
	}

	// Por fim, iremos imprimir o valor da multa que deve ser paga
	cout << "Multa: R$ " << multa << endl;

	return 0;
}