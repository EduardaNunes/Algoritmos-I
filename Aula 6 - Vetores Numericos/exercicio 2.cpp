#include <iostream>

using namespace std;

int main(){
    
    int vetor[7];
    
    for(int i = 0; i < 7; i++){
        cin >> vetor[i];
        
        if(vetor[i] > 5)
            vetor[i] = -5;
        
        cout << vetor[i] << endl;
    }

    return 0;
}