/* Programa que copia un mmensaje en una matriz de caracters y muestra dicha
   matriz por pantalla */
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  char mensaje[20];

  strcpy(mensaje,"Hola mundo cruel!!");
  cout << mensaje << '\n';
  return 0;
}
