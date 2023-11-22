#include <iostream>
#include <iomanip>

using namespace std;

void operacoes(char op,float x,float y){
    
    switch (op){
        case '+': cout << fixed << setprecision(4) << x+y;
        break;
        case '-': cout << fixed << setprecision(4) << x-y;
        break;
        case '*': cout << fixed << setprecision(4) << x*y;
        break;
        case '/': if(y != 0){
                    cout << fixed << setprecision(4) << x/y;
                }else{
                    cout << "ERRO: Divisao por Zero";
                }
        break;
    }
}

int main()
{
    float n1, n2;
    char c;
    cin >> c >> n1 >> n2;
    operacoes(c,n1,n2);

    return 0;
}