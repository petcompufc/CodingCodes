// Enunciado da Questão:
/*
	Faça um Programa que possua dois vetores de inteiros e um de booleanos. 
	O seu programa deve, então, comparar todos os elementos do primeiro vetor com todos os elementos do segundo vetor,
	sempre considerando as mesmas posições. Se os números forem iguais, passe “true” (ou 1) para a mesma posição no 
	terceiro vetor. Se não, passe “false” (ou 0). 
	
	Por último, imprima na tela o número de todas as posições onde os dois vetores são iguais, e as posições onde 
	eles não são iguais.
*/

// Observações do Tio Minho:
/*
	Esse algoritmo é bastante fácil de entender, quando se observa a lógica.

	Utilizaremos um "for" para "varrer" os vetores, já que todos possuem o mesmo tamanho.
	Para cada iteração do "for", verificaremos se o elemento "i" do primeiro vetor é igual ao elemento "i" do segundo
	vetor. Se isso for verdade, passaremos o valor "true" para a mesma posição "i" do terceiro vetor; se não, passamos
	"false", na mesma posição.

	Para exibir as posições é possível fazer dois "for"s. O primeiro vai varrer o terceiro vetor e vai imprimindo os 
	números de onde o vetor possuir o valor "true" (ou 1) na posição "i". Depois, faz-se um novo "for" para fazer a 
	mesma coisa, mas imprimindo as posições onde o valor do "i" seria "false" (ou 0).

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <string>

// Comando para omitir o "std::"
using namespace std;

// Programa Principal
int main()
{
	// Criação dos vetores. O tamanho "10" é arbitrário
	int vetor1[10], vetor2[10];
	bool vetor3[10];

	// Faça alguma inicialização para os dois primeiros vetores (para que possamos testar o algoritmo).
	// O tipo de inicialização (direta ou entrada de usuário) fica à sua escolha. 
	// Aqui irei pedir que o Usuário digite
	vetor1[0] = 0; vetor1[1] = 2; vetor1[2] = 7; vetor1[3] = 18; vetor1[4] = 5; vetor1[5] = 13; vetor1[6] = 7; vetor1[7] = 8; vetor1[8] = 0; vetor1[9] = 15;
	vetor2[0] = 7; vetor2[1] = 2; vetor2[2] = 4; vetor2[3] = 2; vetor2[4] = 5; vetor2[5] = 1; vetor2[6] = 7; vetor2[7] = 1; vetor2[8] = 9; vetor2[9] = 15;

	// Faremos, então, um "for" para irmos comparando os dois primeiros vetores.
	for(int i = 0; i < 10; i++)
	{
		// Compararemos os elementos "i" dos dois vetores.
		if(vetor1[i] == vetor2[i])
			vetor3[i] = true;		// Passaremos "true" para o terceiro vetor se a comparação for verdadeira
		else
			vetor3[i] = false;		// Passaremos "false" para o terceiro vetor se a comparação for verdadeira
	}


	// Agora, iremos imprimir as posições da Lista que possui os elementos iguais.

	cout << "Posicoes Iguais: ";
	for(int i = 0; i < 10; i++)
	{
		if(vetor3[i])		// Quando a variável é booleana, não precisamos escrever "(vetor3[i] == true)". Basta o nome da variável
			cout << i << "; ";
	}
	cout << endl;


	cout << "Posicoes Diferentes: ";
	for(int i = 0; i < 10; i++)
	{
		if(!vetor3[i])		// Quando queremos comparar um "false", e a variável é booleana, colocamos um "!" antes do nome dela
			cout << i << "; ";
	}
	cout << endl;


	return 0;
}
