/* Programa que presenta por pantalla todas las potencias enteras de que sean
   menores o iguales a 100 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int potencia=2;

  while (potencia<=100){
    printf("La potencia es %d\n", potencia);
    potencia*=2;
  }
  return 0;
}
