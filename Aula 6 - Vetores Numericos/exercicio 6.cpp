#include <iostream>

using namespace std;

int main()
{
    int vetor[20];
    int x;
    
    cin >> x;
    while(x<0 || x>10){
        cin >> x;
    }
    
    cout << "Sequencia:" << endl;
    for(int i = 0; i < 20; i++){
        vetor[i] = i;
        
        if(i != x){
            cout << vetor[i] << "  ";
        }
    }

    return 0;
}