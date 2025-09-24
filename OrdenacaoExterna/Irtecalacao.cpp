#include <iostream>
#include <vector>

using namespace std;
using TipoDado = char;  //* Declarando alias para facilitar a troca do tipo de dado

int main()
{
    int tamM, qtdFitas;
    vector<int> dados_entrada;
    TipoDado valor;

    cout << "Digite o tamanho da memoria: ";
    cin >> tamM;

    cout << "Digite a quantidade de fitas: ";
    cin >> qtdFitas;

    //todo ENTRADA DE DADOS DE TAMANHO DESCONHECIDO - FASE 1
    cout << "Digite o conjunto de dados: (Precione CTRL + Z para encerrar a leitura)";
    while (cin >> valor)
    {
        dados_entrada.push_back(valor); 
    }
    
    //todo MONTAGEM DOS BLOCOS INICIAIS ORDENADOS - FASE 2

    vector<vector<TipoDado>> fitas(qtdFitas);                   //* Criando um vetor de vetores para armazenar as fitas, que são outros vetores

    int fitas_de_entrada = qtdFitas/2;                          //* Declarando as primeiras fitas que vão ser utilizadas
    int fita_destino_atual = 0;                                 //* Declarando fita inicial

    

    return 0;
}