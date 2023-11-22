#include <iostream>

using namespace std;

void classificaCaractere(char x){
    
    if(x == '+' || x == '-' || x == '*' || x == '/' || x == '%'){
        cout << "Operador matematico." << endl;
    }else if(x == '<' || x == '>') {
        cout << "Operador relacional." << endl;
    }else if(x == '!') {
        cout << "Operador logico." << endl;
    }else if(x == '&' || x == '=' || x == '"' || x == '\'' || x == '(' || x == ')' || x == '{' || x == '}') {
        cout << "Outro simbolo valido em C." << endl;
    }else{
        cout << "Caractere nao identificado." << endl;
    }
    
}

int main()
{
    char x,y,z;
    cin >> x >> y >> z;
    classificaCaractere(x);
    classificaCaractere(y);
    classificaCaractere(z);
    
    return 0;
}