#include <iostream>

using namespace std;

int quantidade(float n, int count){
    
    if(n<0){
       count++;
       return count;
    }else{
        return count;
    }
    
}

int main()
{
    float x;
    int negativos = 0;

    while(cin >> x){
        negativos = quantidade(x, negativos);
    }
    
    cout << "Total de números negativos: " << negativos << endl;
    
}