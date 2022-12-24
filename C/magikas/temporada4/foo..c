// https://www.youtube.com/watch?v=eXnaVfIa5cM&list=PLTd5ehIj0goOAWdpCpghXiRCmEOrJJLEW&index=36
#include <stdlib.h>
#include "opacas.h"

struct foo
{
  int a;
  char b;
};

foo_t *nuevo_foo()
{
  foo_t *f = malloc(sizeof(foo_t));
  set_foo(f, 0, 0);
  return f;
}
void borrar_foo(foo_t *foo) { free(foo); }
void set_foo(foo_t *foo, int a, int b)
{
  foo->a = a;
  foo->b = b;
}
int suma_foo(foo_t *f) { return f->a + f->b; }
