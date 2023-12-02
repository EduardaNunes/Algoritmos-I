#include <iostream>

using namespace std;

void multiplos(int n1, int n2, int x){
    
    if(n1>n2){
        
        while(n1>=n2){
            
            if(n1%x==0){
                cout << n1 << " ";
            }
            n1--;
        }
        
    }else if(n1<n2){
        
        while(n1<=n2){
            
            if(n1%x==0){
                cout << n1 << " ";
            }
            n1++;
        }
        
    }else{
        cout << "error"; 
    }
}

int main()
{
    int n1,n2,x;
    
    cin >> n1 >> n2 >> x;
    
    multiplos(n1,n2,x);

    return 0;
}