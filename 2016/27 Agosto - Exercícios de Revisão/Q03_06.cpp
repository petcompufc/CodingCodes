// Enunciado da Questão:
/*
	Que tal programarmos um Facebook? Criaremos uma classe Usuario que possui os seguintes atributos: Login, Senha, Status, Nome e 
	Lista de Amigos. Faremos um simples Sistema que terá as seguintes funcionalidades:
		Cadastrar/Login/Logout um Usuário;
		Solicitar Amizade;
		Verificar Amigos;
*/

// Observações do Tio Minho:
/*
	Não há muito mistério nesse sistema, apenas criaremos uma classe "Usuário" (ou "User") que terá os atributos
	citados. O atributo "Status" refere-se ao Usuário estar ou não online.

	Após isso, faremos um sisteminha, no programa principal, para realizar as funções pedidas. 
	Vamos criar, no programa principal, um vetor de 30 Usuários. No método de "Cadastrar" nós seremos capazes de
	incluir Usuários no vetor usando EXATAMENTE a mesma lógica que o Cadastro que fazíamos no Sistema da Loja.
	Vamos usar o atributo "login" como identificador, e vamos usar o valor "VAZIO" como valor crítico.

	A função "Cadastrar" pede ao usuário que digite as informações necessárias (Login, Senha e Nome), e então ela
	cria um novo Usuário e inclui ele no Vetor de Usuários.

	A função "Login" pede o "Login" e "Senha" para o usuário e, quando esse digitar, verifica se existe no Vetor
	de Usuários algum Usuário que tenha exatamente aquele Login e aquela Senha. Se sim, então a função muda o
	atributo "Status" desse Usuário para "true".

	A função "Logout" faz exatamente a mesma coisa que a função "Login", porém ele troca o "Status" do Usuário para
	"false" ao invés de "true".
	
	A função "Solicitar Amizade", do Sistema, pede o "Login" do Usuário que vai adicionar e pergunta o "Nome" do
	outro Usuário que deseja adicionar como amigo. Ele então usa de algum artifício para incluir esse Usuário no
	Vetor de Usuários (recomenda-se criar, na classe "Usuario" um método de Cadastrar Amigo).

	A função "Verificar Amigos", simplesmente pergunta o Login do Usuário e depois imprime o Nome e Status de todos
	os seus amigos.

	AS FUNÇÕES DE "SOLICITAR AMIZADE" E "VERIFICAR AMIGOS" SÓ PODE SER EXECUTADA SE O USUÁRIO EM QUESTÃO ESTIVER
	LOGADO (OU SEJA, SEU "STATUS" É IGUAL A true).

	Estudem bem o código e qualquer dúvida me perguntem! :)
	E-mail: minhotmog@gmail.com
*/
// SOLUÇÃO:

// Bibliotecas
#include <iostream>
#include <stdlib.h>		// Para usar a função "malloc"
#include <string>

// Comando para omitir "sf::"
using namespace std;

// Classe Usuário
class User
{
private:
	// Atributos
	string login, password;		// Usuário e Senha para Login
	string name;				// Nome do Usuário
	bool status;				// Status de Conexão. true = Online, false = Offline

	// Como a classe não está completa até então, o único jeito de criar um Vetor do mesmo tipo da Classe
	// é usando Ponteiros. Preste atenção no Construtor Padrão como fazemos para inicializar um vetor de
	// 30 Espaços usando Ponteiros.
	User* friendList;			// Lista de Amigos

public:
	// Métodos
	// Construtor Padrão
	User() 
	{	
		// Valor Crítico (Padrão) de Login
		login = "VAZIO";

		// Outras inicializações Padrões
		password = "";
		name = "";
		status = false;	// Todo Usuário começa desconectado

		// Inicialização do Vetor com Ponteiro (Alocação Dinâmica de Memória)
		// Lê-se da seguinte forma:
		// FriendList recebe um Vetor de "User" com o espaço (o Malloc é quem calcula o espaço) igual a
		// 30 vezes o tamanho (sizeof) um Usuário.
		friendList = (User*) malloc(30 * sizeof(User));

		// Agora, por causa da natureza desse Vetor de Ponteiros, nós devemos inicializar o "login" de cada 
		// um dos 30 amigos (Eles não inicializam sozinhos, porque ponteiros não usam construtores).
		for(int i = 0; i < 30; i++)
			friendList[i].setLogin("VAZIO");
	}

	// GETTERS
	string getLogin() {
		return login;
	}

	string getPassword() {
		return password;
	}

	string getName() {
		return name;
	}

	bool isConnected() {	// Só pq o nome tá diferente não deixa de ser um getter :P
		return status;
	}

	User getFriend(int index) {
		return friendList[index];
	}

	// SETTERS
	void setLogin(string login) {
		this->login = login;
	}

	void setPassword(string password) {
		this->password = password;
	}

	void setName(string name) {
		this->name = name;
	}

	void setStatus(bool connected) {
		this->status = connected;
	}

	// Método para Cadastrar um Novo Amigo
	void friendRequest(User newFriend) 
	{
		for(int i = 0; i < 30; i++)
		{
			if(friendList[i].getLogin() == "VAZIO") {
				friendList[i] = newFriend;
				cout << "Amigo cadastrado!" << endl;
				return;
			}
		}

		// Se não houver mais espaços disponíveis...
		cout << "Sua Lista de Amigos está cheia!" << endl;
	}

	// Método para exibir Lista de Amigos
	void showFriends()
	{
		cout << "Lista de Amigos: " << endl;
		
		for(int i = 0; i < 30; i++)
		{
			// Se o nome for diferente de "VAZIO", nós imprimos a informação
			// Se não, só imprimos "Espaço Disponível"
			if(friendList[i].getLogin() != "VAZIO")
			{
				cout << "\t" << friendList[i].getName();

				if(friendList[i].isConnected())
					cout << " - Online" << endl;
				else
					cout << " - Offline" << endl;
			}
			else
				cout << "Espaco Disponivel!" << endl;
		}

		cout << endl;
	}
};

// Programa Principal
int main()
{
	// Vetor de Usuários
	User facebookers[100];

	// Menu do Sisteminha
	int option = 0;

	while(option != 6)
	{
		cout << "___________ MENU ___________" << endl;
		cout << "1. Cadastrar Novo Usuario" << endl;
		cout << "2. Login" << endl;
		cout << "3. Logout" << endl;
		cout << "4. Solicitar Amizade" << endl;
		cout << "5. Exibir Lista de Amigos" << endl;
		cout << "6. Sair" << endl;
		cout << "Escolha uma opcao: " << endl;
		cin >> option;

		// Opções
		// Opção de Cadastro
		if(option == 1)
		{
			// Variáveis a ser utilizadas no Cadastro
			User novoUsuario;
			string login, password, name;

			cout << "Digite o Login a ser Cadastrado: ";
			cin >> login;

			// Vamo fazer um "for" rápido para garantir que esse "login" não exista
			bool jaExiste = false;

			for(int i = 0; i < 100; i++) {
				if(facebookers[i].getLogin() == login){
					jaExiste = true;
					break;
				}
			}

			// Aqui nós continuamos de acordo com a informação que o "for" de cima nos dá.
			if(jaExiste)
				cout << "Ja existe um Usuario com esse Login!" << endl;
			else
			{
				// Se não existir um Usuário com esse Login, continuamos o cadastro aqui.
				cout << "Digite a Senha a ser Cadastrado: ";
				cin >> password;
				
				cout << "Digite o Nome a ser Cadastrado: ";
				cin >> name;

				// Aqui nós "inicializamos" o novo Usuário e o colocamos no primeiro lugar disponível do Vetor
				novoUsuario.setLogin(login);
				novoUsuario.setPassword(password);
				novoUsuario.setName(name);

				for(int i = 0; i < 100; i++)
				{
					if(facebookers[i].getLogin() == "VAZIO")
						facebookers[i] = novoUsuario;
				}
			}

		}
		// Fim da Opção de Cadastro
		// Opção de Login
		else if(option == 2) {
			// Variáveis a ser utilizadas
			string login, password;

			cout << "Digite o Login: ";
			cin >> login;

			cout << "Digite a Senha: ";
			cin >> password;

			// Vamos procurar um Usuário com o mesmo Login informado. Se não encontrarmos, dizemos que o Login está inválido.
			// Quando encontrarmos um Login válido, vamos então verificar se Senha está correta.
			int i;
			for(i = 0; i < 100; i++)
			{
				if(facebookers[i].getLogin() == login && facebookers[i].getPassword() == password)
				{
					facebookers[i].setStatus(true);
					cout << "Usuario conectado!" << endl;
					break;
				}
			}

			// Se o "for" tiver percorrido os 100 lugares do vetor sem dar o "break"...
			if(i == 100)
				cout << "Login ou Senha inválidos!" << endl;
		}
		// Fim da Opção de Login
		// Opção de Logout
		else if(option == 3) {
			// Literalmente idêntica à de Login, só muda que nós mudaremos o "status" pra "false" ao invés de "true".
			// Variáveis a ser utilizadas
			string login, password;

			cout << "Digite o Login: ";
			cin >> login;

			cout << "Digite a Senha: ";
			cin >> password;

			// Vamos procurar um Usuário com o mesmo Login informado. Se não encontrarmos, dizemos que o Login está inválido.
			// Quando encontrarmos um Login válido, vamos então verificar se Senha está correta.
			int i;
			for(i = 0; i < 100; i++)
			{
				if(facebookers[i].getLogin() == login && facebookers[i].getPassword() == password)
				{
					facebookers[i].setStatus(false);
					cout << "Usuario desconectado!" << endl;
					break;
				}
			}

			// Se o "for" tiver percorrido os 100 lugares do vetor sem dar o "break"...
			if(i == 100)
				cout << "Login ou Senha inválidos!" << endl;

		}
		// Fim da Opção de Login
		// Opção de Solicitar Amizades
		else if(option == 4) {
			// Iremos perguntar qual dos Usuários deseja adicionar um amigo
			// Variáveis a ser utilizadas
			string login;

			cout << "Digite o Login: ";
			cin >> login;

			int i;
			for(i = 0; i < 100; i++)
			{
				// Nós, então, procuramos o Usuário
				if(facebookers[i].getLogin() == login)
				{
					// Quando encontrarmos, vamos verificar se ele está logado
					if(facebookers[i].isConnected())
					{
						// Agora, vamos perguntar o nome do amigo que ele deseja adicionar
						string nomeAmigo;

						cout << "Digite o Nome do Amigo que deseja adicionar: ";
						cin >> nomeAmigo;

						// Vamos, agora, procurar a tal pessoa que tiver esse nome
						int j;
						for(j = 0; j < 100; j++)
						{
							if(facebookers[j].getName() == nomeAmigo){
								facebookers[i].friendRequest(facebookers[j]);		// Facebooker[i] adicionar Facebooker[j]
								break;
							}
						}

						// Se o "for" tiver percorrido os 100 lugares do vetor sem dar o "break"...
						if(j == 100)
							cout << "Nao existe nenhum Usuario com o Nome especificado!" << endl;
					}
					else
						cout << "O Usuario está desconectado!" << endl;

					break;
				}
			}

			// Se o "for" tiver percorrido os 100 lugares do vetor sem dar o "break"...
			if(i == 100)
				cout << "Login inválido!" << endl;

		}
		// Fim da Opção de Solicitar Amizades
		// Opção de Exibir Amigos
		else if(option == 5) {
			// Iremos perguntar de qual dos Usuários a Lista vai ser exibida
			// Variáveis a ser utilizadas no Cadastro
			string login;

			cout << "Digite o Login: ";
			cin >> login;

			int i;
			for(i = 0; i < 100; i++)
			{
				// Nós, então, procuramos o Usuário
				if(facebookers[i].getLogin() == login)
				{
					// Quando encontrarmos, vamos verificar se ele está logado
					if(facebookers[i].isConnected())
					{
						facebookers[i].showFriends();
					}
					else
						cout << "O Usuario está desconectado!" << endl;

					break;
				}
			}

			// Se o "for" tiver percorrido os 100 lugares do vetor sem dar o "break"...
			if(i == 100)
				cout << "Login inválido!" << endl;

		}
		// Fim da Opção de Exibir Amigos
		// Opção Sair
		else if(option == 6) {
			cout << "Obrigado por utilizar o Sistema! Até logo!" << endl;
		}
		// Fim da Opção Sair
		else
			cout << "Opcao invalida!!!" << endl;
	}
	// Fim do Menu

	return 0;
}