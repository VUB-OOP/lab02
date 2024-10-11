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
  void postavi(double x, double y) {
    postaviX(x);
    postaviY(y);
    // this->x = x; u ovom slučaju nije best practice budući da se ne koristi setter metoda. Isto vrijedi i za this->y = y;
  }
  void info() {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
  }
  double x;
  double y;
};

int main() {
  Tocka2D tocka1 { 1.0, 2.0 };
  Tocka2D tocka2 { 3.0, 4.0 };

  tocka1.postaviX(5.0);
  tocka2.postaviY(6.0);

  tocka1.postavi(7.0, 8.0);

  tocka1.info();
  tocka2.info();
}
