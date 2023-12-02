#include <iostream>

using namespace std;

int main()
{
    double x;
    int contador = 1;
    cin>>x;
    int contador_menor = 1;
    int contador_maior = 1;
    double maior = x;
    double menor = x;
    
    while (cin>>x){
        contador++;
       if(x>maior){
           maior = x;
           contador_maior=contador;
           
       }
       if(x<menor){
           menor = x;
           contador_menor=contador;
       }
    }
    
    cout << "O " << contador_maior << "o elemento é o maior."<<endl;
    cout << "O " << contador_menor << "o elemento é o menor."<<endl;

    return 0;
}