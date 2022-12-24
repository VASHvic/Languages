#include <stdio.h>
// g++ C/magikas/temporada2/goto.c -o test.exe && ./test.exe && rm test.exe

int main()
{
  int i, j = 0;
  if (j > 100)
  {
    etiqueta2:
    printf("Hola");
    goto etiqueta_final;
  }
  while (j < 500)
  {
    for (i = 1; i < 10; i++)
    {
      j = j + i;
      printf("%d\n", j);
      if (j > 300)
      {
        goto etiqueta1;
      }
    }
  }
  etiqueta1:
  printf("Hemos alcanzado el valor j es igual a : %d\n", j);

  goto etiqueta2;
  etiqueta_final:
  return 0;
}