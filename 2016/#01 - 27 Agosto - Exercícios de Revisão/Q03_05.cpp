// Enunciado da Questão:
/*
	Criaremos uma classe para Criptografar/Decriptografar Mensagens. Essa classe usará a Cifra de César e terá três métodos:
		Receber mensagem (Armazenar em uma variável)
		Enviar mensagem (Deve retornar a mensagem criptografada)
		Decriptografar (Deve receber uma mensagem e uma chave, e encontrar a Mensagem Original)
*/

// Observações do Tio Minho:
/*
	Um exercício bastante desafiador e divertido.

	A Cifra de César é um método de criptografia básico, fácil de implementar.
	Basicamente, deve-se possuir um valor de "descolamento" fixo, e, através dele uma mensagem será criptografa. A criptografia
	consiste em substituir cada letra (que não seja um espaço) pela letra que fica a uma distância "X" dessa letra no alfabeto.
	O valor de "X" é exatamento o valor de "deslocamento" previamente fixado.
	Para mais info: https://pt.wikipedia.org/wiki/Cifra_de_C%C3%A9sar

	Para essa questão também devemos ter noção da existẽncia da Tabela ASCII.
	A Tabela ASCII consiste na formatação padrão de computadores para representar letras através de números (e vice-versa).
	É através dessa tabela que os Sistemas Eletrônicos dos Computadores conseguem "interpretar" letras e palavras.
	Usaremos a Tabela ASCII para poder nos mover pelo alfabeto, pois as letras estão devidamente ordenadas na Tabela, e,
	como ela já utiliza números, é bastante fácil somar os valores de deslocamento da Cifra.
	Veja a Tabela ASCII aqui: http://web.engr.illinois.edu/~bpeng/images/asciifull.gif

	Faremos, então, a classe que realiza essa Criptografia (e Decriptografia).
	(Para economizar código, faremos apenas a Criptografia para letras minúsculas)

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <string>

// Comando para omitir "sf::"
using namespace std;

// Classe para Cifra de César
class CaesarCipher
{
private:
	// Atributos
	string message;			// Mensagem Original
	int offset;				// Valor de Troca

public:
	// Métodos
	// Construtor Padrão
	CaesarCipher() {}

	// Método para Receber Mensagem (modifica o valor de "message" e "offset")
	void receiveMessage(string message, int offset) 
	{
		this->message = message;
		this->offset = offset;
	}

	// Método para enviar a "message" Criptografada
	string sendMessage()
	{
		string cripto = "";  // O super-cão

		// Para cada letra de "message"...
		for(int i = 0; i < message.size(); i++)
		{
			// Armazenamos o valor ASCII da letra
			int letraI = (int)message[i];

			// Aumentamos essa letra através do Valor de Troca (offset)
			// (Apenas se o caracter não for um espaço em branco)
			if(message[i] != ' ')
				letraI += offset;

			// Fazemos uma correção, para caso o Valor de Troca seja muito alto e o número
			// ultrapasse os números que há na Tabela ASCII
			while(letraI > 122)
				letraI -= 26;

			// Adicionamos a letra modificada na palavra criptografada
			cripto += (char)letraI;
		}

		// Retornamos a mensagem criptografada
		return cripto;
	}

	// Método para Decriptografar uma mensagem encriptografada
	// Para decriptografarmos uma mensagem, é necessário de uma "chave", isto é, uma palavra
	// que sabemos que está dentro da frase para que depois possamos comparar e garantir que
	// a decriptografia está correta. Se o agente não souber nenhuma palavra da mensagem 
	// criptografada, então ela não conseguirá ser decifrada :T
	string decipher(string cripto, string chave)
	{
		// Nessa variável iremos tentar armazenar a String decifrada
		string decipherString = "";

		// Iremos testar Valores de Troca de 1 a 255
		for(int valorTroca = 1; valorTroca < 100; valorTroca++)
		{
			// Primeiramente, iremos usar o mesmo "for" do método anterior, mas dessa vez fazendo
			// a operação reversa 
			for(int i = 0; i < cripto.size(); i++){
				// Armazenamos o valor ASCII da letra
				int letraI = (int)cripto[i];

				// Aumentamos essa letra através do Valor de Troca (valorTroca)
				// (Apenas se o caracter não for um espaço em branco)
				if(cripto[i] != ' ')
					letraI -= valorTroca;

				// Fazemos uma correção, para caso o Valor de Troca seja muito alto e o número
				// ultrapasse os números que há na Tabela ASCII
				while(letraI < 97 && cripto[i] != ' ')
					letraI += 26;

				// Adicionamos a letra modificada na palavra criptografada
				decipherString += (char)letraI;
			}

			// Assim que tivermos uma mensagem "decriptografada" iremos verificar se ela é válida
			// Para isso, vamos procurar nas palavras de "decipherString" se há alguma igual à "chave".
			// Vamos criar uma variável "palavra" que vai recebendo cada letra da string até encontrar
			// um espaço. Quando ela encontrar um espaço, iremos comparar com a chave. Se for igual, 
			// missão cumprida e retornamos a string "decipherString". Se não, resetamos a variável "palavra"
			// e continuamos o processo. Se toda a string "decipherString" for lida e nenhuma "palavra" for igual
			// a "chave", resetamos "decipherString" e o código irá verificar a criptografia para o próximo
			// valor de "valorTroca", do "for".
			string palavra = "";			// "palavra" começa com a primeira letra

			for(int j = 0; j < decipherString.size(); j++)
			{
				if(decipherString[j] == ' ')	// Se encontrarmos um espaço em branco, ou última letra da palavra 
				{
					if(palavra == chave)
						return decipherString;		
					else
						palavra = "";
				}
				else
					palavra += decipherString[j];
			}

			// Precisamos fazer uma última verificação, pois o "for" pode sair sem verificar a última palavra 
			// (ele vai sair assim que colocar a última letra em "palavra").
			if(palavra == chave)
				return decipherString;

			// Aqui, se nada for encontrado, resetamos a string "decipherString" e o "for" irá
			// resetar, verificando tudo de novo só que para outro Valor de Troca.
			decipherString = "";
		}

		return decipherString;		
	}
};

// Programa Principal (Teste)
int main()
{
	CaesarCipher encriptador;

	encriptador.receiveMessage("joao cobra azul", 6);

	cout << encriptador.sendMessage() << endl;
	cout << encriptador.decipher("pugu iuhxg gfar", "azul") << endl;

	return 0;
}