#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Ponto{
    float x;
    float y;
};

float calculoDistancia(Ponto a, Ponto b){
    float dist = sqrt(pow(b.x-a.x,2) + pow(b.y-a.y,2));
    return dist;
}

int main()
{
    Ponto ponto[10];
    float maiorDistancia = 0, distancia;
    
    for(int i = 0; i < 10; i++){
        cin >> ponto[i].x;
        cin >> ponto[i].y;
    }
   
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            distancia = calculoDistancia(ponto[i], ponto[j]);
            if(distancia > maiorDistancia){
                maiorDistancia = distancia;
            }     
        }
    }
    
    cout << fixed << setprecision(2) << maiorDistancia << endl;

    return 0;
}