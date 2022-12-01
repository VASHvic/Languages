#include <stdio.h>
// g++ C/magikas/temporada2/macros.c -o test.exe && ./test.exe && rm test.exe
// https://www.youtube.com/watch?v=teamA4rft1E&list=PLTd5ehIj0goOAWdpCpghXiRCmEOrJJLEW&index=12

#define principal main
#define test 1
#define AREA_RECTANGULO(x, y) ((x) * (y)) // es más optimo para operaciones sencillas en ordenadores poco potentes, lo hace el preprocesador

int area_rectangulo(int ancho, int alto)
{
  return ancho * alto;
}
int principal(int argc, char **argv)
{
#if test
  printf("principal definida\n");
#else
  printf("no definida principal\n");
#endif

  int ancho = 5, alto = 4;
  printf("El área de un rectángulo %d x  %d = %d.\n", ancho, alto, AREA_RECTANGULO(ancho, alto));
}