#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

  int v = 1;
  char hello[]= "Hello World";
  char *str = malloc(4); // allocate 4 bites
  str[0]='h';
  str[1]='e';
  str[2]='y';
  str[3]='\0';
  printf("%s\n",hello);
  printf("%s\n",str);
  free(str);  //liberate memory
  


  printf("Value: %i\n", v);
  printf("Address: %p\n", &v); //referenced address in memory

  return 0;
}
