#include <stdio.h>
#include <math.h>
// g++ C/codewars/expressions-matter.c -o test.exe && ./test.exe && rm ./test.exe

int expression_matter(int a, int b, int c)
{
  int max;
  int op1 = a * (b + c);
  max=op1;
  int op2 = a * b * c;
  if(op2>max)max=op2;
  int op3 = a + b * c;
  if(op3>max)max=op3;
  int op4 = (a + b) * c;
  if(op4>max)max=op4;
  int op5 = a+b+c;
  if(op5>max)max=op5;

  return max;
}
int expression_matter2 (int a, int b, int c) { // la solucio bonica
  if (a==1) ++b;
  if (c==1) ++b;
  if (b==1) if (a<c) ++a; else ++c;
  return a*b*c;
}

int main(int argc, char **argv)
{

  int res = expression_matter(1,1,1);
  printf("%d \n", res);
  return 0;
}