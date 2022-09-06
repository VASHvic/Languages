#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guessedNum;
const int RANGE = 20;

void askForNumber()
{
  printf("Guess a number between 0 and %i: ", RANGE);
  scanf("%i", &guessedNum);
}

int main(int argc, char const *argv[])
{
  time_t t;
  srand((unsigned)time(&t));
  int tries = 3;
  int isWin;
  int numToGuess = rand() % RANGE;

  for (int i = 0; i < tries; i++)
  {
    askForNumber();
    if (guessedNum == numToGuess)
    {
      isWin = 1;
      break;
    }
    else
    {
      guessedNum < numToGuess ? printf("Aim higher! ") : printf("Aim lower! ");

      printf("%i Tries left\n", tries - i - 1);
    }
  }
  isWin == 1 ? printf("👌\n") : printf("😕 The number was %i \n", numToGuess);

  return 0;
}
