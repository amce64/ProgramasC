/* Programa que crea una clase con un atributo entero he implementa los metodos
set_a y el método get_a que retorna el valor del atributo */

#include <iostream>

using namespace std;

class miClase{
  int a; // atributo privado a la miClase
  public:
    void set_a(int numero);
    int get_a();
};

void miClase::set_a(int numero){
  a=numero;
}
int miClase::get_a(){
  return a;
}

int main(int argc, char const *argv[]) {
  miClase objeto1, objeto2;

  objeto1.set_a(10);
  objeto2.set_a(99);
  cout << objeto1.get_a() << endl;
  cout << objeto2.get_a() << endl;

  return 0;
}
