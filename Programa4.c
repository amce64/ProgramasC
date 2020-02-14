/* Programa C que lee desde teclado una serie de números enteros y nos dice
   cual de ellos es el mayor. */

#include <stdio.h>
#include <limits.h>

#define NELEMENTOS 10

int main(int argc, char const *argv[]) {
  int i=1;
  int numero, maximo=INT_MIN;

  while (i<=NELEMENTOS) {
    printf("Introduce %dº numero entero: ",i);
    scanf("%d",&numero);
    if(numero>maximo){
      maximo=numero;
    }
    i++;
  }
  printf("El mayor número leido es: %d\n",maximo);

  return 0;
}
