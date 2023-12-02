#include <iostream>
#define M 3
#define N 4

using namespace std;

void imprimir(int matriz[M][N], int escalar){
    cout << "Escalar: " << escalar << endl << "Matriz Final: " << endl;;
    for(int linha = 0; linha < M; linha++){
        for(int coluna = 0; coluna < N; coluna++){
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }    
}

void calcular(int matriz[M][N], int escalar){
    for(int linha = 0; linha < M; linha++){
        for(int coluna = 0; coluna < N; coluna++){
            matriz[linha][coluna] *= escalar;
        }
    }
}

int main()
{
    int matriz[M][N];
    int escalar;
    
    for(int linha = 0; linha < M; linha++){
        for(int coluna = 0; coluna < N; coluna++){
            cin >> matriz[linha][coluna];
        }
    }
    
    cin >> escalar;
    calcular(matriz, escalar);
    imprimir(matriz, escalar);
    

    return 0;
}