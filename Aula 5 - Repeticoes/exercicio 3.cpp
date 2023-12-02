#include <iostream>

using namespace std;

void quadrante(int x, int y){
    
    if(x>0 && y>0){
        
        cout << "Primeiro" << endl;
        
    }else if(x<0 && y>0){
        
        cout << "Segundo" << endl;
        
    }else if(x<0 && y<0){
        
        cout << "Terceiro" << endl;
        
    }else if(x>0 && y<0){
        
        cout << "Quarto" << endl;
        
    }else{
        cout << "Error" << endl;
    }
}

int main()
{
    int x,y;
    
    cin >> x >> y;
    
    while(x!=0 && y!=0){
       quadrante(x,y);
       cin >> x >> y;
    }

    return 0;
}