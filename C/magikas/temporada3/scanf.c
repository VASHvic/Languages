#include <stdio.h>
// g++ C/magikas/temporada3/scanf.c -o test.exe && ./test.exe && rm test.exe

//scanf es perillosa per overlows que poden borrar memoria subsequent, ja que no comproba la llargaria
// para quan arriba a un espai o intro, si vols llegir espais milllor usar fgets o usar anb %[^\n] (llegir tot hasta el final de linea)
int main(int argc, char** argv){

  char nombre[50];
  int valor;
  printf("escribe un numero\n");
  int resultado = scanf("%d",&valor); // res es 1 si be -1 o 0 si mal
  printf("He leido %d posiciones. valor = %d\n",resultado, valor);
  return 0;
}