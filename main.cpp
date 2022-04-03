#include <iostream>
using namespace std;

int main(){
  float a, b, area;
  int op;
  std::cout<<"Inserire due numeri reali e scegliere l'opzione.\n";
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
            std::cout << "Opzione non disponibile";
    }
  return 0;

}
