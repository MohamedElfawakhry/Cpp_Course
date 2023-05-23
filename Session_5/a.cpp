#include <iostream>
#include <cmath>

using namespace std;

// Abstract shape class
class Shape {
public:
  virtual double area() = 0; // pure virtual function
  virtual double perimeter() = 0; // pure virtual function
};

// Circle class derived from Shape
class Circle : public Shape {
private:
  double radius;
public:
  Circle(double r) {
    radius = r;
  }
  double area() {
    return M_PI * pow(radius, 2);
  }
  double perimeter() {
    return 2 * M_PI * radius;
  }
};

int main() {
  double r = 5.0;
  Circle c(r);
  cout << "Circle area: " << c.area() << endl;
  cout << "Circle perimeter: " << c.perimeter() << endl;
  return 0;
}