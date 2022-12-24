#include <stdio.h>
// g++ C/magikas/temporada3/files.c -o test.exe && ./test.exe && rm test.exe
int main(int argc, char **argv)
{
  FILE *datos = fopen("TODO.md", "r");
  if (!datos)
  {
    printf("No se ha podido abrir el archivo");
    return 1;
  }
  fseek(datos,0,SEEK_END);
  int fileLength = ftell(datos);
  printf("caracteres en el archivo = %d\n",fileLength);
  rewind(datos);
  char *memoriareservada = malloc(fileLength);
  do
  {
    int leido = fgetc(datos);
    printf("%c", (char)leido);
  // long pos = ftell(datos);
  // printf("El cursor esta en el %d\n",pos);
  } while (!feof(datos));
  fclose(datos);
  free(memoriareservada);
}