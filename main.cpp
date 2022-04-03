#include <iostream>
using namespace std;

int main(){
  float a, b, area;
  int op;
  cin >> a >> b >> op;
  switch (op) {
        case 0:
            area = (a*b)/2;
            std::cout << area;
            break;
        case 1:
            area = a*a;
            std::cout << area;
            break;
        case 2:
            area = a*b;
            std::cout << area;
            break;
        default:
            std::cout << "Opzione non valida";
    }
  return 0;

}
