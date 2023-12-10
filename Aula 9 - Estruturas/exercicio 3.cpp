#include <iostream>
#include <iomanip>
#define N 2

using namespace std;

struct empregado{
    char nome[50];
    char cargo[50];
    char data_de_nascimento[11];
    char data_de_admissao[11];
    int salario;
};

int main()
{
    empregado pessoa[4];
    
    for(int i = 0; i < 4; i++){
        cin.getline(pessoa[i].nome,50);
        cin.getline(pessoa[i].cargo,50);
        cin.getline(pessoa[i].data_de_nascimento,11);
        cin.getline(pessoa[i].data_de_admissao,11);
        cin >> pessoa[i].salario;
        cin.ignore();
    }
    
    int maior = pessoa[0].salario;
    int menor = pessoa[0].salario;
    int soma = pessoa[0].salario, maiorI, menorI;
    
    for(int i = 1; i < 4; i++){
        if(pessoa[i].salario > maior){
            maior = pessoa[i].salario;
            maiorI = i;
        }
        if(pessoa[i].salario < menor){
            menor = pessoa[i].salario;
            menorI = i;
        }
        soma += pessoa[i].salario;
    }
    
        cout << fixed << setprecision(2);
        cout << "Dados do funcionario com maior salario: " << endl;
        cout << "Nome: " << pessoa[maiorI].nome << endl;
        cout << "Cargo: " << pessoa[maiorI].cargo << endl;
        cout << "Data de nascimento: " << pessoa[maiorI].data_de_nascimento << endl;
        cout << "Data de admissao: " << pessoa[maiorI].data_de_admissao << endl;
        cout << "Salario: " << (float)pessoa[maiorI].salario << endl << endl;
        
        cout << "Dados do funcionario com menor salario:" << endl;
        cout << "Nome: " << pessoa[menorI].nome << endl;
        cout << "Cargo: " << pessoa[menorI].cargo << endl;
        cout << "Data de nascimento: " << pessoa[menorI].data_de_nascimento << endl;
        cout << "Data de admissao: " << pessoa[menorI].data_de_admissao << endl;
        cout << "Salario: " << (float)pessoa[menorI].salario << endl<< endl;
    
        cout << "Media salarial da empresa:" << endl; 
        cout << "Media: " << (float)soma/4 << endl;

    return 0;
}