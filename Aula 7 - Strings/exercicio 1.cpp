#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char frase[50];
    cin.getline(frase,50);
    
    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] != ' '){
            cout << frase[i];
        }
    }
    cout<<endl;

    return 0;
}