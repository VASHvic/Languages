#include "opacas.h"
#include <stdio.h>
// g++ C/magikas/temporada4/opacas-main.c -o test.exe && ./test.exe && rm test.exe

int main(){
  foo_t *f;
  f = nuevo_foo();
  set_foo(f,4,2);

  printf("mi foo cale %d\n", suma_foo(f));

  borrar_foo(f);

  return 0;
}