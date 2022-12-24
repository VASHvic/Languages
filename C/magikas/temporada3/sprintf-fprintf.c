#include <stdio.h>
// g++ C/magikas/temporada3/sprintf-fprintf.c -o test.exe && ./test.exe && rm test.exe
int main(int argc, char** argv){
  FILE *fp =fopen("lineasd.txt","w");
  int valor = 50;
  // fprintf(stdout,"EL resultado es %d \n",valor); // en pantalla
  fprintf(fp,"EL resultado es %d \n",valor);
  fclose(fp);
  int ret = remove("lineasd.txt");

  char output[50];
  int dia = 19, mes  = 11, anio =2020;
  // sprintf(output,"hoy es %d,%d,%d",dia,mes,anio);
  snprintf(output,10,"hoy es %d,%d,%d",dia,mes,anio); // en esta es pot posar tope
  printf("%s",output);                                // aixina evites overflows
  return 0;
}