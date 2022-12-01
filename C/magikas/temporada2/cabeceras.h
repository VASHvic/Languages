#ifndef CABECERAS // pot fer se també amb pragma once
#define CABECERAS // es fa per seguritat
typedef enum cargo_t
{
  ANALISTA,
  DESARROLLO,
  SISTEMAS
} Cargo;

typedef struct empleado_t
{
  char nombre[10];
  char apellido[40];
  char identificador[9];
  Cargo cargo;
} Empleado;
void print_empleado(Empleado *empl);
#endif