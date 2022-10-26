#include <iostream>
using namespace std;

int main()
{
  string nombre = "Juan";

  int edad = {33};
  double salario;
  cout << "Introduce el salario del empleado: ";
  cin >> salario;
  cout << "Datos del empleado " << endl;

  cout << "Nombre: " << nombre << ". Edad: " << edad << ". Salario: " << salario;

  return 0;
}