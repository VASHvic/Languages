#include <stdio.h>

// g++ C/codewars/check-case.c -o test.exe && ./test.exe && rm ./test.exe

// Write a function that will check if two given characters are the same case

// If either of the characters is not a letter, return -1
// If both characters are the same case, return 1
// If both characters are letters, but not the same case, return 0
// Examples
// 'a' and 'g' returns 1

// 'A' and 'C' returns 1

// 'b' and 'G' returns 0

// 'B' and 'g' returns 0

// '0' and '?' returns -1
int same_case(char a, char b)
{
  int aToAsci = (int)a;
  int bToAsci = (int)b;

  if (aToAsci < 65 || aToAsci > 122 || (aToAsci > 90 && aToAsci < 97))
  {
    return -1;
  }
  if (bToAsci < 65 || bToAsci > 122 || (bToAsci > 90 && bToAsci < 97))
  {
    return -1;
  }
  return (aToAsci >= 65 && aToAsci <= 90) == (bToAsci >= 65 && bToAsci <= 90);
}

#include <ctype.h>

int same_case2(char a, char b)
{
    if (!isalpha(a) || !isalpha(b))
        return -1;
    return !isupper(a) == !isupper(b);
}
int main()
{
  int ab = same_case('a', 'a');
  printf("%d\n", ab);
  int ac = same_case('C', 'B');
  printf("%d\n", ac);
  int ad = same_case('H', '?');
  printf("%d\n", ad);
    int ab2 = same_case2('a', 'a');
  printf("%d\n", ab2);
  int ac2 = same_case2('C', 'B');
  printf("%d\n", ac2);
  int ad2 = same_case2('H', '?');
  printf("%d\n", ad2);

  return 0;
}