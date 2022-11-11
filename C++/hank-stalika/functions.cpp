#include <iostream>
using namespace std;

void hello(char *s)
{
  cout << s << "\n";
}
int main()
{
  char quote[6]; // necesita uno per al caracter especial que marca el final de un string
  cin.get(quote, 6);
  hello(quote);
  return 0;
}