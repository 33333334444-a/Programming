//*************************
* Автор: Прожикин Игорь*
* Название : лаба линейные*
************************* /

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  const double pi = 3.14;
  const double g = 9.82;
  double a = 3.52;
  double h = 1.27;
  double delta = 0.15;
  double h0 = 0.635;
  double d = 0.036;
  double u = 0.82;

  double F0 = a * a;
  double F = (a - (2 * delta)) * (a - (2 * delta));
  double f = (pi * (d * d)) / 4.0;

  double K = sqrt(h0 - delta) - sqrt(h - delta - ((h - h0) * (F0 / F)));
  double t = ((2 * K) / (u * f * (sqrt(2 * g)))) * ((F * F0) / (F0 - F));


  cout << "t = " << t << endl;

  return 0;
}
