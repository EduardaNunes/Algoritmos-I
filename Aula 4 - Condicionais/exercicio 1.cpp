#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int verificar(int x){
    if(x%2 == 0 && x > 0){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int valor;
    cin >> valor;
    
    if(verificar(valor) == 1){
        cout << "Conjunto Z*+ e par";
    }else{
        cout << "Valor invalido";
    }

    return 0;
}