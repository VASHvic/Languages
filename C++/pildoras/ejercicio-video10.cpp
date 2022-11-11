#include <iostream>
using namespace std;

int main(){
  const double price_per_meter_med_quality {35.5};
  const double price_per_meter_high_quality = {55.3};
  const double iva = {0.21};
  double meters_mid_q;
  double meters_high_q;
  double total;
  double iva_a_pagar;
  cout << "BIENVENIDO AL SERVICIO DE INSTALACIÓN DE TARIMA FLOTANTE" << endl;
  cout << "CUANTOS METROS DE CALIDAD MEDIA QUIERES INSTALAR?" << endl;
  cin >> meters_mid_q;
  cout << "CUANTOS METROS DE CALIDAD ALTA QUIERES INSTALAR?" << endl;
  cin >> meters_high_q;

  total = meters_high_q * price_per_meter_high_quality + meters_mid_q * price_per_meter_med_quality;
  cout << "PRECIO TOTAL SIN IVA"<< endl;
  cout << total << endl;
  iva_a_pagar = total * iva;
  cout << "IVA RESULTANTE" << endl;
  cout << iva_a_pagar << endl;

  cout << "EL TOTAL SALE POR"<< endl;
  cout << total+iva;


}