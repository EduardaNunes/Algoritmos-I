#include <iostream>
#include <iomanip>
#define PESSOAS 6

using namespace std;

struct Medidas{
  float peso;
  float altura;
};

int main()
{
    Medidas pessoa[6];
    float soma_Peso = 0, soma_Altura = 0;
    
    for(int i = 0; i < 6; i++){
        cin >> (pessoa[i].peso);
        cin >> (pessoa[i].altura);

        soma_Altura += pessoa[i].altura;
        soma_Peso += pessoa[i].peso;
    }
    
    cout << "Média Pesos: " << fixed << setprecision(2) << soma_Peso/6 << " kg" << endl;
    cout << "Média Alturas: " << fixed << setprecision(2) << soma_Altura/6 << " m" << endl;
    
    return 0;
}