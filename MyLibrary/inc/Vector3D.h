#ifndef Vector3D_h
#define Vector3D_h

#include <iostream>
#include <cmath>
using namespace std;
class Vector3D
{
private:
    double fx;
    double fy;
    double fz;

public:
    Vector3D(); // default constructor
    Vector3D(double x, double y, double z);
    // function to calculate the magnitude of the vector
    double Mag();

    Vector3D add(Vector3D vect);

    void Print();

    double dot(Vector3D vect1);

    Vector3D scale(double x);

    double angle(Vector3D vect);

    Vector3D unit();

    Vector3D operator+(Vector3D vect);
};

#endif