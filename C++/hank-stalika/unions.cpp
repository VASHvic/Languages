#include <iostream>
using namespace std;

// servix pa usar una vartiable com a varios tipos, pero sobreescriu el valor
union Foo
{
  char d;
  int i;
};

int main()
{

  Foo f;

  f.d = 'J';

  cout << f.d << endl;

  f.i = 99;

  cout << f.i << endl;
  cout << f.d << endl;

  cout << sizeof(f) << endl;

  // unio anónima

  union
  {
    double d;
    int x;
  };

  x = 1;

  cout << x << endl;

  return 0;
}