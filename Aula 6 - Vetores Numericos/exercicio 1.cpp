#include <iostream>

using namespace std;

int main(){
    
    int vetor[10];
    
    for(int j = 0; j < 10; j++){
        cin >> vetor[j];
    }
    
    for(int i = 0; i < 10; i+=2 ){
        cout << vetor[i] << endl;
    }

    return 0;
}