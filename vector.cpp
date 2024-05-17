#include <iostream>
class Vector {
private:
  double val1;
  double val2;

public:
  // Default constructor
  Vector() {
    val1 = 1.0;
    val2 = 1.0;
  }

  // Parameterized constructor
  Vector(double val, double val3) {
    val1 = val;
    val2 = val3;
  }
  // Function to calculate difference among vectors
  double diff() {
    return val1-val2;
  }

  // Function to calculate multiplication
  double multi() {
    return val1*val2;
  }
};

int main() {
  // Create a rectangle object with default values
  Vector vect1;

  // Print the area and perimeter of the rectangle
  std::cout << "difference of vectors: " << vect1.diff() << std::endl;
  std::cout << "multiplication of vectors: " << vect1.multi() << std::endl;

  // Create another vector object with specific values
  Vector vect2(5.0, 3.0);

  // Print the area and perimeter of the second rectangle
  std::cout << "Difference of vectors: " << vect2.diff() << std::endl;
  std::cout << "multipliction of vectors: " << vect2.multi() << std::endl;

  return 0;
}
