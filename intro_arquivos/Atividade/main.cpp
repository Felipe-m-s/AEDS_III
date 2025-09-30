#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string nome;
    float altura;
    int idade;
    
    ofstream arq;
    arq.open("dados.in", ios::app);
    if (!arq.is_open())
    {
        cout << "Error ao abrir o arquivo!" << endl;
        return 1;
    }

    cout << "Digite seu nome completo: " << endl;
    getline(cin, nome);

    cout << "Digite a sua altura: " << endl;
    cin >> altura;
    
    cout << "Digite a sua idade: " << endl;
    cin >> idade;

    arq << "Nome: " << nome << endl;
    arq << "Altura: " << altura << endl;
    arq << "Idade: " << idade << endl;

    ifstream arq;
    arq.open("dados.in");
    if (!arq.is_open())
    {
        cout << "Error ao abrir o arquivo!" << endl;
        return 1;
    }

    char linha[255];

    while (!arq.eof())
    {
       
        
    }
    

    return 0;
}