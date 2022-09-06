#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *const argv[])
{
  int arr[] = {1, 2, 3};
  char hola[] = "Hola";
  char *adios = malloc(1);
  adios[0] = 'A';

  printf("%s\n", adios);

  printf("%s\n", hola);

  for (int i = 0; i < 3; i++)
  {
    printf("%d\n", arr[i]);
  }
  free(adios);

  return 0;
}