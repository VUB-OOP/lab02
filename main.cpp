#include <iostream>

class Tocka2D {
public:
  double x;
  double y;
};

int main() {
  Tocka2D tocka1 { 1.0, 2.0 };
  Tocka2D tocka2 { 3.0, 4.0 };

  std::cout << "Tocka 1: (" << tocka1.x << ", " << tocka1.y << ")" << std::endl;
  std::cout << "Tocka 2: (" << tocka2.x << ", " << tocka2.y << ")" << std::endl;
}
