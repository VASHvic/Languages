// g++ C++/hank-stalika/functions.cpp -o test.exe && ./test.exe && rm ./test.exe

#include <iostream>
using namespace std;

// prototipo o declaració
void hello(char *s);
void add(int, int);

int main()
{
  add(1, 2);
  char quote[6]; // necesita uno per al caracter especial que marca el final de un string
  cin.get(quote, 6);
  hello(quote);
  return 0;
}
// definint la funció del prototipo
void add(int a, int b) // function header
{
  cout << (a + b) << "\n";
}
void hello(char *s)
{
  cout << s << "\n";
}