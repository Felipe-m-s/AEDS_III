#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    // ofstream arq;
    // arq.open("arquivo.txt", ios::app);
    // if (!arq.is_open())
    // {
    //     cout << "Error ao abrir o arquivo!" << endl;
    //     return 1;
    // }
    // arq << "Exemplo de texto para arquivo" << endl;
    // // arq.flush();
    // arq.put('P');
    // arq.close();
    
    // ifstream arq;
    // arq.open("arquivo.txt");
    // if (!arq.is_open())
    //  {
    //      cout << "Error ao abrir o arquivo!" << endl;
    //         return 1;
    // }
    // char linha[256];
    // char letra;

    // while (!arq.eof())
    // {
    //     arq.getline(linha, 256);
    //     arq.get(letra);
    //     arq.ignore();
    
    //     cout << "Linha: " << linha << endl;
    //     cout << "Caractere: " << letra << endl;
        
    // }
    
    int tmemoria, fitas, i;
    char c;
    vector<char> mem;

    fstream arq("dados.in", ios::in);
    arq >> fitas >> tmemoria;
    arq.ignore();

    cout << "Fitas: " << fitas << endl;
    cout << "T. Memoria: " << tmemoria << endl;

    while (!arq.eof())
    {
        i = 0;
        while (i < 3 && !arq.eof())
        {
            arq.get(c);
            mem.push_back(c);
            i++;
        }
        sort(mem.begin(), mem.end());
        cout << string(mem.begin(), mem.end()) << endl;
        mem.clear();
    }
    

    arq.close();

    return 0;
}