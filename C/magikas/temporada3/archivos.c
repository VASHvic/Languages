#include <stdio.h>
// g++ C/magikas/temporada3/archivos.c -o test.exe && ./test.exe && rm test.exe
int main(int argc , char** argv){
  int ret = remove("temperatura.bin"); // torna 0 si va be -1 si mal
  int ret2 = rename("TODO.md","Todos.md");
   // tmpfile es per a crear archius temporals
  printf("borrar :%d \n",ret);
  printf("renombrar :%d \n",ret2);
  return 0;
}