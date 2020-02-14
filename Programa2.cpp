// Suma, Resta, Multiplicación entera.
#include <iostream>

using namespace std;

int main(int argc, char const * argv[]){
  int dato1, dato2, resultado;

  dato1=20;
  dato2=10;
  // Suma
  resultado=dato1+dato2;
  cout << dato1 <<" + "<<dato2<<" = "<<resultado<<'\n';
  // Resta
  resultado=dato1-dato2;
  cout << dato1 <<" - "<<dato2<<" = "<<resultado<<'\n';
  // Multiplicación
  resultado=dato1*dato2;
  cout << dato1 <<" * "<<dato2<<" = "<<resultado<<'\n';
  // División
  resultado=dato1/dato2;
  cout << dato1 <<" / "<<dato2<<" = "<<resultado<<'\n';

  return 0;
}
