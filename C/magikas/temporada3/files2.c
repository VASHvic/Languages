#include <stdio.h>
// g++ C/magikas/temporada3/files2.c -o test.exe && ./test.exe && rm test.exe
int main(int argc, char **argv)
{
  FILE *datos = fopen("TODO.md", "r");
  if (!datos)
  {
    printf("No se ha podido abrir el archivo");
    return 1;
  }
  char buffer[80];
  do{
  char *ref = fgets(buffer,80,datos);
  if(ref){
    printf("%s",buffer);
  }
  }while(!feof(datos));
  fclose(datos);

}