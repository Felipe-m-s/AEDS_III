#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    int opcao;
    
    do
    {
        cout << "1 - Cadastrar Pessoa" << endl;
        cout << "2 - Listar Pessoas" << endl;
        cout << "0 - Encerrar" << endl;
        
        cin >> opcao;
        
        switch (opcao)
        {
            case 1: {
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

                cin.ignore();

                cout << "Digite seu nome completo: " << endl;
                getline(cin, nome);

                cout << "Digite a sua altura: " << endl;
                cin >> altura;

                cout << "Digite a sua idade: " << endl;
                cin >> idade;

                arq << nome << endl;
                arq << altura << endl;
                arq << idade << endl;

                arq.close();
                break;
            }
        
        case 2: {
            string nome;
            float altura;
            int idade;
            
            ifstream arq;
            arq.open("dados.in");
            if (!arq.is_open())
            {
                cout << "Error ao abrir o arquivo!" << endl;
                return 1;
            }

            while (getline(arq, nome) && (arq >> idade) && (arq >> altura))
            {
                cout << nome << endl;
                cout << altura << " m" << endl;
                cout << idade << " anos" << endl;
                arq.ignore();
            }
            

            arq.close();
            break;
        }
        default:
            break;
        }

    } while (opcao != 0);

    return 0;
}