#include <iostream>
#define N 5

using namespace std;

void trocar(int matrizA[N][N], int tamanho){
    
    bool impar_encontrado = false;
    bool par_encontrado = false;
    int impar, coluna_impar;
    
    for(int coluna = 0; coluna < tamanho; coluna++){
        if((matrizA[0][coluna]%2 != 0) && (impar_encontrado == false)){
            impar_encontrado = true;
            impar = matrizA[0][coluna];
            coluna_impar = coluna;
        }
    }

    for(int diagonal = 0; diagonal < tamanho; diagonal++){
        if((matrizA[diagonal][tamanho - 1 - diagonal]%2 == 0) && (par_encontrado == false) && (impar_encontrado == true)){
            par_encontrado = true;
            matrizA[0][coluna_impar] = matrizA[diagonal][tamanho - 1 - diagonal];
            matrizA[diagonal][tamanho - 1 - diagonal] = impar;
        }
    }
    
    if(impar_encontrado == false || par_encontrado == false){
        cout << "Nenhuma troca realizada" << endl;
    }else{
        for(int linha = 0; linha < tamanho; linha++){
            for(int coluna = 0; coluna < tamanho; coluna++){
                cout << matrizA[linha][coluna] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int matrizA[N][N];
    int tamanho;
    
    cin >> tamanho;
    
    for(int linha = 0; linha < tamanho; linha++){
        for(int coluna = 0; coluna < tamanho; coluna++){
            cin >> matrizA[linha][coluna];
        }
    }
    
    trocar(matrizA, tamanho);

    return 0;
}