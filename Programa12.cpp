/* Programa que usa variables globales, locales y de bloque */

#include <iostream>

using namespace std;

int Q; // Variable global

int main(int argc, char const *argv[]) {
  int A; // Variable local o de función main.
  A=124;
  Q=1;
  {
    int B; // Variable local en este bloque
    A=457;
    B=124;
    Q=2;
    {
      int C; // Variable local en este bloque
      A=788;
      B=457;
      C=124;
      Q=3;
      cout<<A<<", "<<B<<", "<<C<<", "<<Q<<endl;
    }
    cout<<A<<", "<<B<<", "<<Q<<endl;
  }
  cout<<A<<", "<<Q<<", "<<endl;
  return 0;
}
