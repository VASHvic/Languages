#include <stdio.h>

// g++ C/magikas/union-enum-typedef.c -o test.exe && ./test.exe %% rm test.exe
// https://www.youtube.com/watch?v=SUQqxIQ2psQ&list=PLTd5ehIj0goOAWdpCpghXiRCmEOrJJLEW&index=9

union mi_union
{
  int entero;
  float flotante;
};
enum dia_semana
{
  LUNES,
  MARTES,
  MIERCOLES
};

int main()
{
  union mi_union u;
  u.entero = 123;
  u.flotante = 2.5E6; // llegiría els bits com si fora int
  printf("entero = %d\n", u.entero);
  enum dia_semana dia;
  dia = MARTES;
  printf("hoy es %d\n", dia);
}