#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  srand(time(NULL));
  printf("(r)ock, (p)aper, (s)cissors, shoot!\n");
  scanf("%s", NULL);
  size_t result = rand() % 3;
  switch(result) {
    case 0:
      printf("You win!\n");
      break;
    case 1:
      printf("You lose!\n");
      break;
    default:
      printf("Draw!\n");
  }
  return 0;
}