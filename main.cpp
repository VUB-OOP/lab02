#include <iostream>

class Tocka2D {
public:
  // Dobro, ali nije best practice
  //
  // void postaviX(double noviX) {
  //   x = noviX;
  // }
  // Netko ima praksu definirati podatke s prefiksom _ pa metoda postaviX može izgledati ovako:
  // void postaviX(double x) {
  //   _x = x;
  // }
  // double _x;
  // double _y;
  // Iako je ovo ispravno, ovakav način smatramo zastarjelim iako se još uvijek koristi.
  // 
  // Predlažem da koristite prefiks this-> kako biste jasno naznačili da se radi o članu klase. Setteri onda izgledaju ovako:
  void postaviX(double x) {
    this->x = x;
  }
  void postaviY(double y) {
    this->y = y;
  }
  double x;
  double y;
};

int main() {
  Tocka2D tocka1 { 1.0, 2.0 };
  Tocka2D tocka2 { 3.0, 4.0 };

  tocka1.postaviX(5.0);
  tocka2.postaviY(6.0);

  std::cout << "Tocka 1: (" << tocka1.x << ", " << tocka1.y << ")" << std::endl;
  std::cout << "Tocka 2: (" << tocka2.x << ", " << tocka2.y << ")" << std::endl;
}
