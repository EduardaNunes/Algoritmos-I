#include <iostream>

using namespace std;

void converter(int totalSegundos){
    int horas, minutos, segundos;
    
    horas = totalSegundos / 3600;
    minutos = (totalSegundos / 60) - (horas * 60);
    segundos = totalSegundos - (horas * 3600) - (minutos * 60);
    
    cout << "Conversão: " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos.";
}

int main()
{
    int totalSegundos;
    cin >> totalSegundos;
    converter(totalSegundos);
    return 0;
}