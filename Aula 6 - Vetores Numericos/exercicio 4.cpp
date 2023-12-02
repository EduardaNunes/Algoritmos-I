#include <iostream>

using namespace std;

int quant_neg(float vetor[20], int quantidade){
    int count = 0;
    for(int i = 0; i < quantidade; i++){
        if(vetor[i] < 0){
            count++;
        }
    }
    return count;
}

int main()
{
    int quantidade;
    float vetor[20];
    
    cin >> quantidade;
    
    for(int i = 0; i < quantidade; i++){
        cin >> vetor[i];
    }
    
    cout << quant_neg(vetor,quantidade);

    return 0;
}