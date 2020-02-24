/* Este programa obtiene la tabla de depreciaciones acumuladas y valores reales
   de cada Año de un determinado producto */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  double Coste, Depreciacion, Valor_Recuperacion, Valor_Actual, Acumulado;
  int Anyo, Vida_Util;

  cout<<"Introduzca coste, valor de recuperación y vida util."<<endl;
  cin>>Coste>>Valor_Recuperacion>>Vida_Util;
  cout<<"Introduzca año actual"<<endl;
  cin>>Anyo;
  Vida_Util=Vida_Util+Anyo;
  Valor_Actual=Coste;
  Depreciacion=(Coste-Valor_Recuperacion)/Vida_Util;
  Acumulado=0;
  cout<<"Año\tDepreciación\tDep. Acumlada"<<endl;
  while (Anyo<Vida_Util) {
    Acumulado=Acumulado+Depreciacion;
    Valor_Actual=Valor_Actual-Depreciacion;
    cout<<Anyo<<"\t"<<Depreciacion<<"\t"<<Acumulado<<endl;
    Anyo=Anyo+1;
  }

  return 0;
}
