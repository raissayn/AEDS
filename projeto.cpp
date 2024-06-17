#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

typedef struct {
    string modelo;
    string marca;
    string tipo;
    int ano;
    int km;
    float pot;
    string comb;
    string cambio;
    string direcao;
    string cor;
    int portas;
    string placa;
    float valor;
    bool valido;
}Veiculo;

int main(){
    const int TAM = 32;
    Veiculo vetorVeiculo[TAM];



    ifstream arquivo ("veiculo.txt");
    if (!arquivo.is_open()) {

        cout << "Erro ao abrir o arquivo. " << endl;
        return 1;

    }
    // while (arquivo >> altura >> valor){
    //      cout << altura << " " << valor << endl;
    // }
    int opcao;

    do{
        // Menu de opções.
        cout << "Menu:" << endl;
        cout << "1. Adicionar novo veiculo " << endl;
        cout << "2. Busca de veiculo" << endl;
        cout << "3. Relatório do banco de dados" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao){
            case 1: 

            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            default: 
            cout << "Opção inválida." << endl;

        }
    } while (opcao != 4);

    arquivo.close();
    return 0;
}