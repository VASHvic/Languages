#include <stdio.h>
#include <string.h>

// g++ C/magikas/structs-typedef.c -o test.exe && ./test.exe %% rm test.exe
typedef struct cuenta Cuenta;
typedef int entero; // ensucia algo la estructura global y puede dar lugar a confusión

struct cuenta
{
  char nombre[30];
  char apellido[40];
  entero identificador;
  entero saldo;
};

void imprimir_datos(Cuenta *c) // millor pasarla per referencia per a no copiar-ho tot
{
  printf("El cliente %s %s tiene %d saldo", (*c).nombre, c->apellido, c->saldo); // es pot desreferenciar de les dos maneres
}
int main()
{
  struct cuenta c1;
  c1.saldo = 400;
  c1.identificador = 1235;
  strcpy(c1.nombre, "Pepito"); // Es insegur pk strcpy es pot overflowear
  strcpy(c1.apellido, "Pérez");
  imprimir_datos(&c1); // ací li pasem la direcció
  return 0;
}