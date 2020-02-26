/* Declaración de una variable global */

#include <iostream>

using namespace std;

int MiNumero;; // Declaración de la variable fuera de la función main.

int main(int argc, char const *argv[]) {
  cout<<"¿Cuál es su número favorito? ";
  cin>>MiNumero;
  cout<<"Su numero favorito es "<<MiNumero<<"\n";

  return 0;
}
