#include <iostream>
#define LIN 20
#define COL 20

using namespace std;

void procurar(int matriz[LIN][COL], int x){
    
    bool encontrou = false;
    
    for(int linha = 0; linha < LIN; linha++){
        for(int coluna = 0; coluna < COL; coluna++){
            if((matriz[linha][coluna] == x) && encontrou == false){
                cout << "Linha: " << linha << " Coluna: " << coluna << endl;
                encontrou = true;
            }
        }
    }
    if(encontrou == false){
        cout << "nao encontrado" << endl;
    }
}

int main()
{
    int matriz[LIN][COL];
    int x;
    
    for(int linha = 0; linha < LIN; linha++){
        for(int coluna = 0; coluna < COL; coluna++){
            cin >> matriz[linha][coluna];
        }
    }
    
    cin >> x;
    procurar(matriz,x);
    
    return 0;
}