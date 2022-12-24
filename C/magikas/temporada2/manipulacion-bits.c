#include <stdio.h>
// g++ C/magikas/temporada2/manipulacion-bits.c -o test.exe && ./test.exe && rm test.exe
// https://www.youtube.com/watch?v=h6O6qVw0e5M&list=PLTd5ehIj0goOAWdpCpghXiRCmEOrJJLEW&index=20
#define AZUL      1 << 7
#define VERDE     1 << 6
#define ROJO      1 << 5
#define NARANJA   1 << 4
#define AMARILLO  1 << 3
#define PARDO     1 << 2
#define BLANCO    1 << 1
#define NEGRO     1 << 0

void operacion(unsigned char colores){
  //per a desactivar verde y que no tire un bug per que fa primer el not antes del desplacament o algo aixina

  colores&= ~(VERDE);

  if(colores & AZUL){ // fa una operacio de sumae en bytes per a saber si
    printf("AZUL\n"); // esta activat
  }
  if(colores & VERDE){
    printf("VERDE\n");
  }
  if(colores & PARDO){
    printf("PARDO\n");
  }
  if(colores & NARANJA){ // etc
    printf("NARANJA\n");
  }
  printf("colores = %u\n", colores);
}

int main(void){
operacion(AZUL | VERDE | PARDO); // aci li pasa bits desplacats per 
                                  // simplificar una funcio que tinguera molts parameros


  return 0;
}