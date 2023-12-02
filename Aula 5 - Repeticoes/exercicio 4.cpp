#include <iostream>

using namespace std;

int fatorial(int n){
    int resposta = 1;
    if (n>=0){
        cout<< "Fatorial calculado: ";
        for(int i=1;i<=n;i++){
            resposta*= i;
        }
        return resposta;
    }else{
        cout<< "Fatorial não pode ser calculado: ";
        return -1;
    }
}

int main()
{
    int x;
    cin >> x;
    cout << fatorial(x);

    return 0;
}