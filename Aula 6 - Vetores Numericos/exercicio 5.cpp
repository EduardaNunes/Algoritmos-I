#include <iostream>
#include <iomanip>

using namespace std;

void positivos(int quantidade){
    float vetor[20];
    int count = 0;
    float valor;
    while(count < quantidade){
        cin >> valor;
        if(valor > 0){
            vetor[count] = valor;
            count ++;
        }
    }
    for(int i = 0; i < quantidade; i++){
        cout << fixed << setprecision(2) << vetor[i] << " ";
    }
    
}

int main()
{
    int quantidade;
    cin >> quantidade;
    positivos(quantidade);

    return 0;
}