#include <iostream>
#include <iomanip>

using namespace std;

float desconto_a_vista(float valorTotal){
   float valorComDesconto = valorTotal - (valorTotal/10);
   return valorComDesconto;  
}

int main()
{
    float valorCompra;
    cin >> valorCompra;
    cout << "O valor a vista eh de R$ " << fixed << setprecision(2) << desconto_a_vista(valorCompra);

    return 0;
}