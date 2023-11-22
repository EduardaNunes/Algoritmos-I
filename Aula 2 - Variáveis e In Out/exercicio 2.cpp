#include <iostream>

using namespace std;
 
int main() {
  int A, B, C;
  
  cin >> A;
  cin >> B;
  cin >> C;
  
  int R = (A + B) * (A + B);
  int S = (B + C) * (B + C);
  int D = (R + S)/2;
  
  cout << "D = " << D;
  return 0;
}