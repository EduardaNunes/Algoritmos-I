#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
  float x1, x2, y1, y2;
  
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  
  cout << fixed << setprecision(4) << "Distancia: " << sqrt(( (x2 - x1) * (x2 - x1)) +( (y2 - y1) * (y2 - y1)));
  
  return 0;
}