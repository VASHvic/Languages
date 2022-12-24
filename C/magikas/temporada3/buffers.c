// https://www.youtube.com/watch?v=Wl_PORDi7V0&list=PLTd5ehIj0goOAWdpCpghXiRCmEOrJJLEW&index=30
// g++ C/magikas/temporada3/buffers.c -o test.exe && ./test.exe && rm test.exe

#include <stdio.h>
int main(int argc, char** argv){
  printf("asd"); // en teoria si no poses \n no volca en pantalla, pe aixo es pot fer fflush

  char buffer[200];
  setvbuf(stdout,buffer,_IOFBF,200);// aco faria que el buffer es volcara al omplir 200 bytes
  // _IOLBF este es per a volcar al pillar salto de linea y esta per defecte
  // _IONBF este es sempre

  return 0;
}