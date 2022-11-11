#include <iostream>
using namespace std;

int main()
{
  // char 1 byte      unsigned 0-255
  // char16_t 2 bytes
  // char32_t 4 bytes

  // short 2 bytes u
  // int 4 bytes   u
  // long 8 bytes  u

  // float   4 bytes
  //  double 8bytes
  //  long double 8bytes

  int z;
  int c = 1;
  int v(3);
  int x{5};

  string nombre = "Juan";

  int edad = {33};
  double salario;
  cout << "Introduce el salario del empleado: ";
  cin >> salario;
  cout << "Datos del empleado " << endl;

  cout << "Nombre: " << nombre << ". Edad: " << edad << ". Salario: " << salario;

  return 0;
}