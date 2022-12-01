#include <stdio.h>

// g++ C/magikas/arrays.c -o test.exe && ./test.exe %% rm test.exe

float media(int *edades, int tam)
{ // tmb es pot int edades []
  int v;
  float acum = 0;
  for (v = 0; v < tam; v++)
  {
    acum += edades[v];
  }
  printf("acum %d \n", acum);
  printf("tam %d \n", tam);
  return acum / tam;
}
int main()
{
  int i, j, k, edades[2] = {17, 20}, edades_a_registrar[2];
  for (i = 0; i < 2; i++)
  {
    printf("%d\n", edades[i]);
  }
  for (j = 0; j < 2; j++)
  {
    printf("Introduce la edad %d\n", j); // TODO: no se pk demana 3 vegades
    scanf("%d\n", &edades_a_registrar[j]);
  }
  for (k = 0; k < 2; k++)
  {
    printf("Edades [%d] %d\n", k, edades_a_registrar[k]);
  }
  printf("La edad media de tus edades es %d: ", media(edades, 2)); // TODO: No se pk dona 0
}