#include <stdio.h>
// g++ C/magikas/temporada3/fputc-fputs.c -o test.exe && ./test.exe && rm test.exe

int main(int argc, char** argv){

  FILE* temp = fopen("./escribir.txt","w");
  if(!temp) {
    printf("Error al abrir el archivo\n");
    return 1;
  }
  // fputc('h',temp); //torna u integer en el char que ha escrit si va be
  // fputc('o',temp);
  // fputc('l',temp);
  // fputc('a',temp);
  fputs("Hola mundo",temp);
  // fputs devuelve un numero no negativo si va bbien y EOF si va mal
  fclose(temp);
}
