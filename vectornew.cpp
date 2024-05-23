#include <iostream>
#include <math.h>
using namespace std;
class Vector {
private:
  double val1;
  double val2;
  double x;
public:
  // Default constructor
  Vector() {
    val1 = 1.0;
    val2 = 1.0;
    x=90;
  }

  // Parameterized constructor
  Vector(double val, double val3, double a) {
    val1 = val;
    val2 = val3;
    x=a;
  }
  // Function to calculate difference among vectors
  double diff() {
    return val1-val2;
  }

  // Function to calculate dot product
  double dot() {
    double d=val1*val2;
    return d*sin(x);
  }
  
  // Function to calculate scalar product
  double scalar() {
    double d=val1*val2;
    return d*cos(x);
  }

};

int main() {
  // Create a rectangle object with default values
  Vector vect1;
   cout << "difference of vectors: " << vect1.diff() <<endl;
 cout << "dot product of vectors: " << vect1.dot() <<endl;
cout << "scalar product of vectors:" << vect1.scalar() << endl;
  
  // Create another vector object with specific values
  Vector vect2(5.0, 3.0, 45);
 cout << "Difference of vectors: " << vect2.diff() << endl;
cout << "dot product of vectors: " << vect2.dot() <<endl;
cout << "scalar product of vectors:" << vect2.scalar() << endl;
  return 0;
}
