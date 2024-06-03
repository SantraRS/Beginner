#include<iostream>
#include<cmath>
using namespace std;    
class Vector3D
{
    private:
    double fx;
    double fy;
    double fz;

    public:
    Vector3D(){}//default constructor
    Vector3D(double x, double y, double z) {//pramerterized constructor
        fx=x;
        fy=y;  
        fz=z;
    }
    //function to calculate the magnitude of the vector
    double Mag()
    {
        double m=sqrt((fx*fx)+(fy*fy)+(fz*fz));
        return m;
    }
    
    Vector3D add(Vector3D vect)
    {
        Vector3D vect1;
        vect1.fx=fx+vect.fx;
        vect1.fy=fy+vect.fy;
        vect1.fz=fz+vect.fz;
        return vect1;
    }

    void Print(){cout<<fx<<","<<fy<<","<<fz<<endl;}

    double dot(Vector3D vect1){
        double dot;
        dot=fx*vect1.fx+fy*vect1.fy+fz*vect1.fz;
         return dot;  
    }

    Vector3D scale(double x){
        Vector3D scaled;
        scaled.fx=fx*x;
        scaled.fy=fy*x;
        scaled.fz=fz*x;
        return scaled;
    }

    double angle(Vector3D vect){
      double dot=this->dot(vect);
      double mag1=this->Mag();
      double mag2=vect.Mag();
      double a= atan(-1*mag2/mag1);
      return a;
    }

    Vector3D unit(){
    Vector3D unit;
    unit.fx=fx/Mag();
    unit.fy=fy/Mag();
    unit.fz=fz/Mag();
    return unit;
   
    }

    Vector3D operator +(Vector3D vect){
    Vector3D vect3;
    vect3.fx=fx+vect.fx;
    vect3.fy=fy+vect.fy;
    vect3.fz=fz+vect.fz;
    return vect3;
  }

};  

int main() {
  Vector3D vect1; //magnitude using random values
  cout<<"Magnitude of the vector"<<vect1.Mag()<<endl;
  Vector3D vect2(3,4,5);  // magnitude using given values
  cout << "Magnitude of vectors: " << vect2.Mag() <<endl;  
  cout << "-----------------------------------------"<<endl;
  Vector3D vect3(5,6,7);  //adding of a 3D vector using a single value
  Vector3D vect4=vect2.add(vect3);
vect4.Print() ;  //printing the added vector

Vector3D vect5(0,5,10);
Vector3D vect6(10,5,0);
cout << "dot of vectors: " << vect6.dot(vect5) <<endl; //finding the dot product 
cout <<"===== Angle demo =======" << endl;
double angle = vect5.angle(vect6);//finding the angle between two vectors
cout << "angle between vectors: " << angle<<endl;
Vector3D unit= vect6.unit();
unit.Print();
cout << "-----------------------------------------"<<endl;
Vector3D vect7=vect5+vect6;
vect7.Print();




}