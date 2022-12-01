#include <stdio.h>
// g++ C/magikas/condicionales.c -o test.exe && ./test.exe && rm ./test.exe

void imprimir_dia(int dia_semana)
{
  switch (dia_semana)
  {
  case 1:
    printf("Es Lunes \n");
    break;
    ;
  default:
    printf("No se que dia es. \n");
    break;
  }
}
int main()
{
  int x = 20;
  int y = 100;
  int dia = 1;

  if ((x > 20 && x < 30) && (x == 20))
  {
    printf("Funciona!, x val %d y y val %d", x, y);
  }
  else
  {
    printf("No funciona!, x val %d y y val %d \n", x, y);
  }
  imprimir_dia(2);
}