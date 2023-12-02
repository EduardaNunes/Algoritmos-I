#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char frase[50];
    int qnt, deslocamento;
    
    cin >> qnt;
    
    for(int i = 0; i < qnt; i++){
        cin.ignore();
        cin.getline(frase,50);
        cin >> deslocamento;
        
        for(int j = 0; frase[j] != '\0'; j++){
            
            if((frase[j] + deslocamento) > 'Z'){
                frase[j] = frase[j] + deslocamento - 26;
            }else{
                frase[j] += deslocamento;      
            }
        }
        
        cout << frase << endl;
    }
    


    return 0;
}