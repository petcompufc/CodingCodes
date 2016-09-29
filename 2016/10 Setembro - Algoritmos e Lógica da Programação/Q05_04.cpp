// Enunciado da Questão:
/*
	Problema:

	Para “n” alunos de uma determinada classe são dadas as 3
	notas das provas. Calcular a média aritmética das provas de
	cada aluno, a média da classe, o número de aprovados e o
	número de reprovados. (Critério de Aprovação: média maior
	ou igual a 7).
*/

// Observações do Tio Minho:
/*
	A questão consiste em realizar diversos cálculos progressivos.

	Primeiramente, iremos pedir para que o Usuário digite o valor de "n", a fim de dinamizar
	o código e permitir que façamos diversos exemplos.

	Quanto à lógica da questão, devemos simplesmente realizar um "for" de "n" iterações que, para cada iteração,
	iremos calcular (imagine que estejamos numa iteração qualquer que vamos chamar de "i"):

		1. A média aritmética do aluno "i".Essa lógica consistirá em pedir que o usuário digite o valor das notas das
		   três provas e calcule a sua média (soma das provas dividida por três). Imprimiremos, logo, esse valor;
		
		2. Se a média calculada for maior que 7.0, então o aluno foi aprovado. Isso significa que iremos incrementar
		   alguma variável que estejamos utilizando para contar o número de alunos aprovados;
		
		3. Se a média calculada não for maior que 7.0, então o aluno foi reprovado. Isso significa que iremos incrementar
		   alguma variável que estejamos utilizando para contar o numero de alunos reprovados. Existe uma abordagem alternativa
		   onde não é necessário ficar contando a quantidade de reprovados: a quantidade de reprovados é igual à quantidade
		   de alunos da turma menos a quantidade de alunos aprovados, logicamente
		
		4. A média da turma até então (até "i"), que consiste em somar (médiaAritmetica / n) a uma variável que armazene a média
		   da turma. Perceba que mediaAritmetica consiste na própria média do aluno "i", e "n" é o numero a alunos naquela turma.
		   Essa fórmula vale porque a média de uma turma é igual a soma das medias dividido pelo número de alunos:
		   		MédiaTurma = (media1 + media2 + media3 ... mediaN) / n = (media1/n)+(media2/n)+ ... +(media3/n)
		   				   = SOMA(mediaI/n)

	Após fazer isto tudo, nos resta apenas imprimir o valor da média da turma, a quantidade de aprovados e a quantidade de reprovados.

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
	// Iremos, de antemão, criar as variáveis para armazenar a média da turma, a quantidade de aprovados e a quantidade de reprovados.
	// E, logicamente, a quantidade de alunos da turma (n)
	float mediaTurma = 0.0;
	int qtdAprovados = 0, qtdReprovados = 0;
	int n;

	// Vamos, então, pedir que o usuário digite o valor de "n"
	cout << "Digite a quantidade de alunos: ";
	cin >> n;

	// Iremos criar o "for" que irá fazer o cálculo que desejamos para cada aluno
	for (int i = 0; i < n; i++)
	{
		// Começaremos criando três variáveis, que representam as notas das provas, e a variável para armazenar a média.
		float nota1, nota2, nota3;
		float media;

		// Pediremos que o usuário digite o valor de cada nota
		cout << "\nAluno[" << i+1 << "] -> Nota 1: ";
		cin >> nota1;

		cout << "Aluno[" << i+1 << "] -> Nota 2: ";
		cin >> nota2;

		cout << "Aluno[" << i+1 << "] -> Nota 3: ";
		cin >> nota3;

		media = (nota1 + nota2 + nota3) / 3;

		cout << "Aluno[" << i+1 << "] -> Media: " << media << endl;

		// Verificaremos se o aluno esta aprovado ou não
		if(media > 7)
			qtdAprovados++;
		else
			qtdReprovados++;

		// Incrementaremos a média da turma com base na média do aluno
		mediaTurma += (media / n);
	}

	// Por fim, iremos imprimir os valores da Média da Turma, da Quantidade de Aprovados e da Quantidade de Reprovados
	cout << "\n-----------------------------" << endl;
	cout << "Media da Turma: " << mediaTurma << endl;
	cout << "Aprovados: " << qtdAprovados << endl;
	cout << "Reprovados: " << qtdReprovados << endl;

	return 0;
}