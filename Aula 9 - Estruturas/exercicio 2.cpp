#include <iostream>
#include <iomanip>

using namespace std;

struct est_Vetor{
    float x;
    float y;
    float z;
};

float somaVetor(float coordenadaA, float coordenadaB){
    
    int soma = coordenadaA + coordenadaB;
    
    return soma;
}

float multiplicaVetor(float coordenadaA, est_Vetor B){
    float maior = B.x;
    if(B.y > B.x){
        maior = B.y;
    }
    if(B.z > B.x && B.z > B.y){
        maior = B.z;
    }
    return coordenadaA*maior; 
}

int main()
{
    est_Vetor A, B;
    
    cin >> A.x;
    cin >> A.y;
    cin >> A.z;
    
    cin >> B.x;
    cin >> B.y;
    cin >> B.z;

    cout << fixed << setprecision(2) << "Soma: " << endl;
    cout << "x = " << somaVetor(A.x, B.x) << endl;
    cout << "y = " << somaVetor(A.y, B.y) << endl;
    cout << "z = " << somaVetor(A.z, B.z) << endl;
    
    cout << "Multiplicacao: " << endl;
    cout << "x = " << multiplicaVetor(A.x, B) << endl;
    cout << "y = " << multiplicaVetor(A.y, B) << endl;
    cout << "z = " << multiplicaVetor(A.z, B) << endl;

    return 0;
}