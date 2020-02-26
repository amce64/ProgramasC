/* Programa que incluye en la instrucciones almacenadas en otro archivo en su
   cuerpo */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  #include "direccion.txt"
  return 0;
}
