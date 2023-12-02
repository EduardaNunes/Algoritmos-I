#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    float valores[12];
    float soma =0 ;
    float contador = 0;
    
    for(int i = 0; i < 12; i++){
        cin >> valores[i];
        
        if((valores[i] >= -3) && (valores[i] <= 3)){
            soma = soma + valores[i];
            contador++;
        }
    }
    
    cout << "Media dos elementos no intervalo: " << fixed << setprecision(1) << soma/contador << endl;

    return 0;
}