// Programa que suma los 50 primeros números enteros positivos

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, suma;

  suma=0;
  for(i=1;i<=50;i++) suma+=i;
  printf("La suma de los 50 primeros números enteros es: %d\n",suma);
  
  return 0;
}
