#include <stdio.h>

// g++ C/magikas/punteros.c -o test.exe && ./test.exe %% rm test.exe
void jugar(int n)
{
  n = (n + 1) * 2;
  printf("%d \n", n);
}
void modificar(int *n) // acceder a posiciones de memoria sabiendo su dirección
{
  *n = 123; // escribir en direcciones de memoria
}

int main()
{
  int x = 10;
  int *dirX = &x; // Trau la direcció de memoria y la guarda en x

  printf("Puntero ? %u", dirX);
  printf("Dirección de x: %u\n", &x);
  jugar(x);
  printf("Valor de x %d\n", x);
  modificar(&x);
  printf("Valor de x %d\n", x);
}