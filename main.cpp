#include <iostream>
#include <iomanip>
#include <string.h>
// perdão, não sei usar bool em c++

using namespace std;

int main()
{
	string nome = "Gaara";
	string vila = "Vila da Areia";
	int idade;
	int bijuu;
	float altura = 1.66;
	double peso = 50.9;
	char operacao;


	cout << "Olá " << nome << "! Insira a sua idade para declararmos em qual período está: ";
	cin >> idade;

	if (idade < 15) {
		cout << "Você está no perído clássico, boa sorte no exame chunin" << endl;
	}
	else if (idade >= 15 && idade <= 33) {
		cout << "Você está no perído shippuden, cuidado que vão roubar o Shukaku" << endl;
	}
	else {
		cout << "Boruto é surto coletivo" << endl;
	}

	cout << "\nVocê tem posse da bijuu de quantas caudas? ";
	cin >> bijuu;

	if (bijuu == 1) {
		cout << "Que bom que você sabe :D" << endl;
	}
	else
	{
		cout << bijuu << "??? Não assistiu o próprio anime" << endl;
	}
	cout << "\n";
	cout << "Aqui estão os seus dados" << endl;
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	cout << "Vila: " << vila << endl;
	cout << "Bijuu número: " << bijuu << endl;
	cout << "Altura: " << altura << endl;
	cout << "Peso: " << peso << endl;
	cout << "\n";
	cout << "Gostaria de dar uma olhada no seu perfil do tinder?" << endl;
	cout << "1 = SIM" << endl;
	cout << "2 = NÃO" << endl;
    
	int opcao;

	cin >> opcao;

	if (opcao == 1) {

		cout << "Nome: " << nome << endl;
		cout << "Idade: " << idade << endl;
		cout << "Vila: " << vila << endl;
		cout << "Qualidade: ser o kazekage mais novo da história" << endl;
		cout << "Bio: 'Ei gostaria de descobrir o significado da tatuagem em minha testa?'" << endl;
		cout << "\n";
		cout << "Digite '+' para dar match ou '-' para recusar: ";
		cin >> operacao;

		switch (operacao)
		{
		case '+':
			cout << "Você deu match com você mesmo?" << endl;
			break;

		case '-':
			cout << "Cadê o amor próprio? 'Amor' não é a palavra escrita em sua testa?" << endl;
			break;
		}

		cout << "\n";
		cout << "Quantos matchs foram dados hoje? ";
		int match;
		cin >> match;
		int tudo = match + 100;
		cout << "Você já tem " << tudo << " matchs, já é 3x mais que a semana interior!";
	}

	else {
		cout << "\nOk então, tenha um bom dia!";
	}


	  
   

   
}
