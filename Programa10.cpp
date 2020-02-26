/* Programa que dada la distancia en millas a la Luna la pasa a Km */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  const int Luna=238857; // distancia en millas
  float lunaKilometros;

  cout<<"Distancia a la Luna "<<Luna<<" en millas."<<endl;
  lunaKilometros=Luna*1.609; // una milla son 1,609 Kms.
  cout<<"Distancia a la Luna "<<lunaKilometros<<" en kms."<<endl;
  
  return 0;
}
