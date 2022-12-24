#include <stdio.h>
// g++ C/magikas/temporada3/printf.c -o test.exe && ./test.exe && rm test.exe
// printf tonrna el numero de caracters que ha imprimit
int main(int argc , char** argv){
  int returnCode = printf("Hola Mundo\n"); //el final de linea en windowns val 2
  printf("La variable vale %d\n", returnCode);
  char letra = 'a';
  printf("Imprimo el caracter %c \n",letra);
  char *cadena = "soy un string";
  printf("%s\n",cadena);
  int numero = 1234;
  printf("El numero vale %d\n",numero); 
  // la %i tmb es numero, %u es pot usar per a unsigned pero d tmb va
  long long int numeroLong = 12342341234213444; // lo de long long int es veu que es de c++ per a que no ixca un warning
   printf("El numero vale %ld \n",numeroLong); 
   float flotante = 14.1234;
   printf("Mi flotante es %f\n",flotante); //%e per a notacio cientifica
   printf("Mi flotante en notacio cientifica es %e\n",flotante);
   //la %g dona mes percisio y ho fa casi smepre encientific
    printf("Mi flotante (el g elegix el formato per tu) es %g\n",flotante);
    //%x hexadecimal
    printf("Mi nuermo en hexadecimal es %x\n",numero);



  return 0;
}
