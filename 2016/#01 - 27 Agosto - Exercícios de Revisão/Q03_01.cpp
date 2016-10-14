// Enunciado da Questão:
/*
	Faça um programa em C++ que contenha uma classe que representa um Funcionário. Essa classe deve possuir um Nome, 
	Salário e Departamento. Em seguida, cire uma classe Empresa que possui os atributos CNPJ, Departamento e um Vetor 
	de Funcionários. Por fim, crie um programa que inicialize 5 Funcionários e faça um Laço de Repetição para alocar 
	cada Funcionário em uma Empresa do seu Departamento.
*/

// Observações do Tio Minho:
/*
	A lógica de criação de Classe é bem simples e vocês já devem estar mais que familiarizados:
	class [NomeDaClasse] { };      <---- Dentro das Chaves é que entram os Atributos e Métodos.

	Os Atributos são implementados da mesma forma que Variáveis, e os Métodos da mesma forma que Funções.

	O pulo do gato para a questão acima é saber implementar o Vetor de Funcionários dentro da classe Empresa,
	mas isso é bastante simples: basta imaginar que a classe "Funcionario" é um tipo comum, como "int", "float"
	ou "string", e fazer um vetor dessa classe do mesmo jeito que se faz um vetor de qualquer outra variável.
	A dificuldade realmente deve vir quando criar um método de cadastrar um "Novo Funcionario" no Vetor, e,
	para isso, podemos usar tanto um método de Cadastrar, semelhante ao do sistema da Loja que usamos, como é
	possível usar um Setter Personalizado.

	A parte do Programa Principal, que consiste em alocar os Funcionários, também é bem simples.
	Basta, para ela, criar um "for" ou "while" para varrer os 5 Funcionários que você criou no "int main()"
	e, para um, verificar se ele possui o mesmo Departamento que a Empresa (que você também criou no "int main()").
	Se for verificado que sim, então basta usar o método que você implementou em Empresa (o método de Cadastro
	ou o Setter Personalizado) para inserir específico Funcionário no Vetor que está lá em Empresa.

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <string>

// Comando para omitir o "std::"
using namespace std;

// Classe Funcionário
class Funcionario
{
private:
	// Atributos
	string nome;
	float salario;
	string departamento;

public:
	// Métodos
	// Construtor Padrão
	Funcionario()
	{
		// Para sabermos se um espaço do Vetor que nós iremos criar (mais à frente) está
		// disponível ou não, devemos ter alguma forma de saber se o "Funcionário" está
		// inicializado ou não. Para isso, vamos usar o Construtor Padrão para dizer que
		// todos os Funcionários vão começar com o nome "VAZIO". Se encontrarmos algum objeto
		// com esse nome, então sabemos que o Funcionário não foi incializado.
		nome = "VAZIO";

		// Também é bom inicializar os outros atributos com valores "zerados"
		salario = 0.0;
		departamento = "";
	}

	// GETTERS
	string getNome() {
		return nome;
	}

	float getSalario() {
		return salario;
	}

	string getDepartamento() {
		return departamento;
	}

	// SETTERS
	void setNome(string nome) {
		this->nome = nome;
	}

	void setSalario(float salario) {
		this->salario = salario;
	}

	void setDepartamento(string departamento) {
		this->departamento = departamento;
	}

};

// Class Empresa
class Empresa
{
private:
	// Atributos
	int cnpj;
	string departamento;
	Funcionario listaFunc[30];	// Aqui está o nosso Vetor de Funcionários. 

public:
	// Métodos
	Empresa()
	{
		// Não precisamos de nada específico nesse Construtor Padrão, mas vamos
		// inicializá-lo com valores "zero" mesmo assim :P
		cnpj = 0;
		departamento = "";
	}

	// GETTERS
	int getCNPJ() {
		return cnpj;
	}

	string getDepartamento() {
		return departamento;
	}

	// Note como se escreve o Getter Personalizado para um Vetor: nós pedimos, como Parâmetro,
	// qual o índice da posição do Funcionário dentro do Vetor.
	Funcionario getFuncionario(int indice) {
		return listaFunc[indice];
	}

	// SETTERS
	void setCNPJ(int cnpj) {
		this->cnpj = cnpj;
	}

	void setDepartamento(string departamento) {
		this->departamento = departamento;
	}

	// Note o funcionamento do Setter Personalizado para o Vetor. A lógica é idêntica ao Getter Personalizado
	void setFuncionario(Funcionario funcionario, int indice) {
		this->listaFunc[indice] = funcionario;
	}


	// O método de Cadastro é igual ao que fizemos para aquele nosso Sistema de Loja. Ele é, inclusive, menor.
	// Nòs iremos varrer todo o vetor "listFunc" atrás do primeiro espaço que estiver "vazio", e então colocaremos
	// o novo funcionário lá. Para sabermos que está vazio, nós usaremos o fato que descrevi no Construtor de Funcionário
	// que diz que todo Funcionário que "nunca foi mexido" começa com o atributo "nome" igual a "VAZIO".
	void cadastrar(Funcionario novoFuncionario)
	{
		for(int i = 0; i < 30; i++)
		{
			if(listaFunc[i].getNome() == "VAZIO") {
				listaFunc[i] = novoFuncionario;
				cout << "Usuario Cadastrado com Sucesso!" << endl;
				return;
			}
		}

		// Se nenhum Funcionário for encontrado, o "for" irá terminar e estaremos nessa parte do código.
		// Então, vamos enviar uma mensagem de erro informando que não há onde alocar o Funcionário
		cout << "ERRO: Nao ha espacos disponivel para alocar o novo Funcionario!" << endl;
	}
};

// Programa Principal
int main()
{
	// Primeiramente, vamos criar o objeto de "Empresa" e os 5 "Funcionario"s que a questão pede
	// para que nós criemos.
	Empresa empresa;
	Funcionario desempregado[5];

	// Agora, vamos inicializar "empresa" com algum valor arbitrário.
	empresa.setCNPJ(40028922);
	empresa.setDepartamento("Computacao");

	// Por fim, vamos fazer um "for" de 5 laços e em cada laço vamos pedir para o usuário digitar as informações
	// do "desempregrado" de número "i".
	for(int i = 0; i < 5; i++)
	{
		string nome, departamento;
		float salario;

		cout << "Digite o Nome do " << i << "o Funcionario: ";
		cin >> nome;

		cout << "Digite o Salario do " << i << "o Funcionario: ";
		cin >> salario;

		cout << "Digite o Departamento do " << i << "o Funcionario: ";
		cin >> departamento;

		desempregado[i].setNome(nome);
		desempregado[i].setSalario(salario);
		desempregado[i].setDepartamento(departamento);
	}

	// Agora iremos fazer o Laço de Repetição que a questão pediu, para alocarmos cada
	// Funcionário "desempregado" na Empresa, se ela tiver o mesmo departamento.
	// Para isso, temos dois modos, o primeiro modo é usando o método de Cadastrar:
	for(int i = 0; i < 5; i++)
	{
		if(desempregado[i].getDepartamento() == empresa.getDepartamento())
			empresa.cadastrar(desempregado[i]);
	}

	// O segundo método é usar o "Setter Personalizado" para colocar o "desempregado" na
	// primeira posição disponível. Veja que esse modo é um pouco ruim porque, por exemplo,
	// digamos que só o "desempregado" de número [4] cabe na Empresa, então os espaços [0],
	// [1], [2] e [3] do Vetor vão ficar vazios, e o [4] cheio. O Vetor vai ficar "esburacado"
	for(int i = 0; i < 5; i++)
	{
		if(desempregado[i].getDepartamento() == empresa.getDepartamento())
			empresa.setFuncionario(desempregado[i], i);
	}	


	return 0;
}