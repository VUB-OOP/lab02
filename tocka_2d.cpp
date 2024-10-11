#include <iostream>
#include <cmath>
#include "tocka_2d.h"

void Tocka2D::postaviX(double x) {
  this->x = x;
}

void Tocka2D::postaviY(double y) {
  this->y = y;
}

void Tocka2D::postavi(double x, double y) {
  postaviX(x);
  postaviY(y);
}

void Tocka2D::info() {
  std::cout << "(" << x << ", " << y << ")" << std::endl;
}

double Tocka2D::udaljenost(const Tocka2D& druga) {
  return std::sqrt((x - druga.x) * (x - druga.x) + (y - druga.y) * (y - druga.y));
}
