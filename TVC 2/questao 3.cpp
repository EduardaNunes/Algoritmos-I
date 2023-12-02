#include <iostream>

using namespace std;

bool verificar(int x){

    int divisores = 0;

    for(int i = 1; i <= x; i++){

        if(x%i == 0){
            divisores++;
        }else if(divisores > 2){
            return false;
        }
    }

    if(divisores == 2){
        return true;
    }
}

void total(int n1, int n2){

    int contador = 0;

    cout << "Numeros Primos: ";

    for(int i = n1; i <= n2; i++){
        if(verificar(i) == 1){
            cout << i << " ";
            contador++;
        }
    }

    cout << "\nTotal de numeros primos: " << contador << endl;
}

int main(){

    int n1,n2;
    cin >> n1 >> n2;

    while((n1 < 2) || (n2 < 2) || (n1>n2)){
        cout << "Intervalo Inválido. Favor inserir um novo intervalo: " << endl;
        cin >> n1 >> n2;
    }
    total(n1,n2);

    return 0;
}

// Observação: - na letra b a funcao deveria imprimir os numeros e retornar a quantidade.
// Nota Final: 40/45