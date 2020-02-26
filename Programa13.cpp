/* Programa que crea una clase que se denomina "Contador" que define un único
   atributo "cont" (un entero) e inicializa de forma automática el atributo a
   cero. Los métodos que se implementan de esta clase son: incrementar el
   contador (en una unidad), decrementa el contador (en una unidad) y muestra el
   valor actual del contador. El contador núnca podrá tener un valor negativo */

#include <iostream>

using namespace std;

class Contador{
private:
  int contador;
public:
  void Inicial(){
    contador=0;
  }
  void Incrementar(){
    contador++;
  }
  void Decrementar(){
    if(contador>0){
      contador--;
    }
  }
  void Mostrar(){
    cout<<"El contador contiene: "<<contador<<endl;
  }
};
int main(int argc, char const *argv[]) {
  Contador c1;

  c1.Inicial();
  c1.Mostrar();
  c1.Incrementar();
  c1.Mostrar();
  c1.Decrementar();
  c1.Mostrar();
  c1.Decrementar();
  c1.Mostrar();
  c1.Incrementar();
  c1.Mostrar();

  return 0;
}
