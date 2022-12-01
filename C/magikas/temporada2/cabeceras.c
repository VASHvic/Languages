#include <stdio.h>
#include "cabeceras.h"
#include <string.h>
// g++ C/magikas/temporada2/cabeceras.c -o test.exe && ./test.exe && rm test.exe
// https://www.youtube.com/watch?v=Aq9fXMevXis&list=PLTd5ehIj0goOAWdpCpghXiRCmEOrJJLEW&index=13

int main()
{
  Empleado e;
  strncpy(e.nombre, "Pepito", 10);
  strncpy(e.apellido, "perez", 40);
  printf("se llama %s %s\n", e.nombre, e.apellido);
}