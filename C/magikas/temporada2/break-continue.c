#include <stdio.h>
// g++ C/magikas/temporada2/break-continue.c -o test.exe && ./test.exe && rm test.exe
int main()
{
  int valores[] = {1, 2, 3, 4,5,6};
  for (int i = 0; i < 4; i++)
  {
    if (i == 1)
    {
      continue;
    }
    if (i == 3)
    {
      break;
    }
    printf("valores[%d] = %d\n", i, valores[i]);
  }
}