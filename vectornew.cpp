#include <iostream>
#include <cmath>
using namespace std;
class Vector {
private:
  double fx;
  double fy;
public:
  // Default constructor
  Vector() {
    fx = 1.0;
    fy = 1.0;
  }

  // Parameterized constructor
  Vector(double x, double y) {
    fx = x;
    fy = y;
  }
  // Function to calculate difference among vectors
  double Mag() {
  double d=sqrt((fx*fx)+(fy*fy));
  return d;
  }

  //function to add two vectors
  Vector add(Vector vect1, Vector vect2) {
    Vector vect3;
    vect3.fx= vect1.fx+vect2.fx;
    vect3.fy= vect1.fy+vect2.fy;
    return vect3;
  }
  Vector add(Vector vect){
    Vector vect3;
    vect3.fx=fx+vect.fx;
    vect3.fy=fy+vect.fy;
    return vect3;
  }
  void Print(){
    cout<<fx<<","<<fy<<endl;
  }
  
  double dot(Vector vect1, Vector vect2){
    double dot;
    dot=(vect1.fx*vect2.fx)+(vect1.fy*vect2.fy);
    return dot;

  }
   double dot(Vector vect2){
    double dot;
    dot=(fx*vect2.fx)+(fy*vect2.fy);
    return dot;
   }
   double angle( Vector vect) {
      double dot=this->dot(vect);
      double mag1=this->Mag();
      double mag2=vect.Mag();
      double a= acos(dot/(mag1*mag2));
      return a;
   }

   Vector unit(){
    Vector unit;
    unit.fx=fx/Mag();
    unit.fy=fy/Mag();
    return unit;
    
   }

   Vector scale(double s){
    Vector scaled;
    scaled.fx=fx*s;
    scaled.fy=fy*s;
    return scaled;
   }

   Vector operator +(Vector vect){
    Vector vect3;
    vect3.fx=fx+vect.fx;
    vect3.fy=fy+vect.fy;
    return vect3;
  }
};

int main() {
  // Create a rectangle object with default values
  Vector vect1;
   cout << "difference of vectors: " << vect1.Mag() <<endl;
  
 //cout << "dot product of vectors: " << vect1.dot() <<endl;
//cout << "scalar product of vectors:" << vect1.scalar() << endl;
  Vector vect2(3,4);
 cout << "Magnitude of vectors: " << vect2.Mag() <<endl;
  // Create another vector object with specific values
cout << "-----------------------------------------"<<endl;
  Vector vect3(5,6);
  cout << "as"<<endl;

  Vector vect4=vect2.add(vect3);
vect4.Print() ;

{
Vector vect1(0,5);
Vector vect2(5,0);
cout << "dot of vectors: " << vect2.dot(vect1,vect2) <<endl;
cout <<"===== Angle demo =======" << endl;
double angle = vect1.angle(vect2);
cout << "angle of vectors: " << angle<<endl;
Vector unit= vect2.unit();
unit.Print();
cout << "-----------------------------------------"<<endl;
Vector vect3=vect1+vect2;
vect3.Print();

}
}
