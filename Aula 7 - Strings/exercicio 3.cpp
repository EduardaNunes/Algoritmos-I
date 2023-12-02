#include <iostream>
#define TAM 500

using namespace std;

void retirar(char frase[], char letra){
    
    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] != letra){
            cout << frase[i];
        }
    }
    cout << endl;
}

int main()
{
    char frase[60];
    char letra;
    
    cin.getline(frase,60);
    cin >> letra;
    
    retirar(frase,letra);
    
    return 0;
}