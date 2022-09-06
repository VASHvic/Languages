#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int test;
  int *ptrTest = &test; // pots usar tmb  int* var o int *var
  printf("%p\n", &test);
  printf("%p\n", ptrTest);
  printf("%d\n", *ptrTest); // dereference
  // free(ptrTest); no entenc
}