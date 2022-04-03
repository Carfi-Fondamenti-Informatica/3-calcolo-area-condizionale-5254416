#include <iostream>
using namespace std;

int main(){
  float a, b, area;
  int op;
  std::cout<<"Inserire due numeri reali e scegliere l'opzione.\n";
  cin >> a >> b >> op;
  if (op==0) {
      area = (a*b)/2;
      std::cout << area;
  } else if (op==1) {
      area = a*a;
      std::cout << area;
  } else if (op==2){
      area = a*b;
      std::cout << area;
  } else {
      std::cout << "Opzione non disponibile";
  }
  return 0;

}
