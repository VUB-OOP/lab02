#include <iostream>
#include "tocka_2d.h"

int main() {
  Tocka2D tocka1 { 1.0, 2.0 };
  Tocka2D tocka2 { 3.0, 4.0 };

  tocka1.postaviX(5.0);
  tocka2.postaviY(6.0);

  tocka1.postavi(7.0, 8.0);

  tocka1.info();
  tocka2.info();

  double udaljenost = tocka1.udaljenost(tocka2);
  std::cout << "Udaljenost: " << udaljenost << std::endl;

  // ili ovako
  std::cout << "Udaljenost: " << tocka1.udaljenost(tocka2) << std::endl;
}
