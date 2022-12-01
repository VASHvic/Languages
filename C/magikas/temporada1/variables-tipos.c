#include <stdio.h>

void imprimir_datos(const char *nombre, int edad) // per el iso de c++ el char * es constant per a que no tire warning
{
  printf("Hola tu nombre es %s, y tu edad es %d", nombre, edad);
}
int main()
{
  char x;
  int y;

  x = 'c';
  y = 24;
  int z = 3 * y;

  printf("y = %d, x es un char y equivale a:  %c \n", y, x);
  printf("z vale %d", z);
  imprimir_datos("pepe", 2);
  return 0;
}