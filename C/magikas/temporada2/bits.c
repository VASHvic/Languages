#include <stdio.h>
// g++ C/magikas/temporada2/bits.c -o test.exe && ./test.exe && rm test.exe


int main(void) {
  // NOT
  unsigned char foo = 200;
  printf("foo = %d\n",foo);
  printf("foo = %u\n",(unsigned char)~foo); // sino castees el compilador pensa que son 32 bits
  unsigned char a = 185,b=52;

  printf("a = %u\n",(unsigned char)a);
  printf("b = %u\n",(unsigned char)b);
  printf("a and b = %u\n",(unsigned char)(a&b));
  printf("a or b = %u\n",(unsigned char)(a|b));
  printf("a xor b = %u\n",(unsigned char)(a^b));




  return 0;
}