/*   */

#include <stdio.h>

void pantalla(void);

int main(int argc, char const *argv[]) {

  pantalla(); // llamada a la función

  return 0;
}

void pantalla(void) {
  printf("Se ejecuta este comando dentro de la función\n");
}
