#include <iostream>
#include <iomanip>

using namespace std;

float media(){
    float val_dado;
    int soma = 0;
    int contador = 0;

    do{
        cout << "Insira o valor tirado no dado: " << endl;
        cin >> val_dado;
        soma += val_dado;
        contador++;

    }while(val_dado != 1);

    float media = (float)soma/(float)contador;

    return media;
}

int main(){

    int jogadores, vencedor = 0; 
    float resultado = 0, vencedor_anterior = 0;

    cout << "Insira o Número de Jogadores: " << endl;
    cin >> jogadores;

    for(int i = 1; i <= jogadores; i++){

        resultado = media();
        cout << "Pontuação do jogador " << i << ": " << setprecision(3)<< resultado << endl; 

        if(resultado > vencedor_anterior){

            vencedor_anterior = resultado;
            vencedor = i;
        }
    }

    cout << "Jogador vencedor: " << vencedor << endl;

    return 0;
}

// Nota Final: 35/35