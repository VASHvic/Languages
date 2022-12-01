#include <stdio.h>
#include <stdlib.h>
#define veinte 20

// g++ C/magikas/memoria-dinamica.c -o test.exe && ./test.exe && rm ./test.exe
int main()
{
  float temperaturas[veinte]; // una manera de reservar memoria

  printf("Cuantos elementos quieres reservar?");
  int longitud;
  scanf("%d", &longitud);

  float *valores = (float *)malloc(20 * sizeof(float));
  if (valores == NULL)
  {
    printf("error en malloc, no hay tanta memoria");
  }
  int i;
  for (i = 0; i < longitud; i++)
  {
    valores[i] = 5, 55E5;
  }
  free(valores);
  printf("todo está correcto");
}