#include <iostream>
class Rectangle {
private:
  double length;
  double breadth;

public:
  // Default constructor
  Rectangle() {
    length = 1.0;
    breadth = 1.0;
  }

  // Parameterized constructor
  Rectangle(double len, double brth) {
    length = len;
    breadth = brth;
  }

  // Function to calculate area
  double Area() {
    return length * breadth;
  }

  // Function to calculate perimeter
  double Perimeter() {
    return 2 * (length + breadth);
  }
};

int main() {
  // Create a rectangle object with default values
  Rectangle rect1;

  // Print the area and perimeter of the rectangle
  std::cout << "Area of rectangle1: " << rect1.Area() << std::endl;
  std::cout << "Perimeter of rectangle1: " << rect1.Perimeter() << std::endl;

  // Create another rectangle object with specific values
  Rectangle rect2(5.0, 3.0);

  // Print the area and perimeter of the second rectangle
  std::cout << "Area of rectangle2: " << rect2.Area() << std::endl;
  std::cout << "Perimeter of rectangle2: " << rect2.Perimeter() << std::endl;

  return 0;
}