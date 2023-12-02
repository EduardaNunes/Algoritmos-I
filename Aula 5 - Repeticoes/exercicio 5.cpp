#include <iostream>
#include <iomanip>

using namespace std;

void positivos(int n){
    float contador = 0;
    float soma;
    
    while(cin>>n){
         if(n>0){
             contador++;
             soma += n;
         }
    }
    if(contador == 0){
        cout << "Nao foram informados numeros positivos";
    }else{
        cout << contador << " numeros sao positivos e a media e " << fixed << setprecision(2) << soma/contador;
    }
  
}

int main()
{
    positivos(0);

    return 0;
}