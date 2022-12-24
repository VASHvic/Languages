#include <stdio.h>
// g++ C/magikas/temporada3/fread.c -o test.exe && ./test.exe && rm test.exe


  struct medicion
  {
    unsigned short anio;
    unsigned char mes;
    unsigned char dia;
    float temperatura;
    unsigned char uv;
    float viento;
  };

 void print_medicion(struct medicion *medicion){
  printf("Fecha: %d-%d-%d, Registro %f C UV %d, Viento %d kh/h\n", medicion->anio,medicion->mes,medicion->dia,medicion->temperatura,medicion->uv,medicion->viento);
 }

int main(int argc, char ** argv){
  struct medicion medida;
  print_medicion(&medida);
  FILE *fp = fopen("temperatura.bin","rb");
  int total = fread(&medida, sizeof(struct medicion),1,fp);
  if(total != 1){
    printf("Error");
  }
  print_medicion(&medida);

  fclose(fp);
}