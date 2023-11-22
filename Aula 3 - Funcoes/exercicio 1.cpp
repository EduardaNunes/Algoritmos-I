#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.141592

using namespace std;

float area_circulo(float raio){
    float area = pi* pow (raio,2);
    return area;
}

int main()
{
    float raio;
    cin >> raio;
    cout << "Área do círculo: " << fixed << setprecision(2) << area_circulo(raio) << " cm2.";

    return 0;
}