#include <iostream>
#include <cmath>
#include "Vector3D.h"
using namespace std;

Vector3D::Vector3D() {} // default constructor
Vector3D::Vector3D(double x, double y, double z)
{ // pramerterized constructor
    fx = x;
    fy = y;
    fz = z;
}
// function to calculate the magnitude of the vector
double Vector3D::Mag()
{
    double m = sqrt((fx * fx) + (fy * fy) + (fz * fz));
    return m;
}

Vector3D Vector3D::add(Vector3D vect)
{
    Vector3D vect1;
    vect1.fx = fx + vect.fx;
    vect1.fy = fy + vect.fy;
    vect1.fz = fz + vect.fz;
    return vect1;
}

void Vector3D::Print() { cout << fx << "," << fy << "," << fz << endl; }

double Vector3D::dot(Vector3D vect1)
{
    double dot;
    dot = fx * vect1.fx + fy * vect1.fy + fz * vect1.fz;
    return dot;
}

Vector3D Vector3D::scale(double x)
{
    Vector3D scaled;
    scaled.fx = fx * x;
    scaled.fy = fy * x;
    scaled.fz = fz * x;
    return scaled;
}

double Vector3D::angle(Vector3D vect)
{
    double dot = this->dot(vect);
    double mag1 = this->Mag();
    double mag2 = vect.Mag();
    double a = atan(-1 * mag2 / mag1);
    return a;
}

Vector3D Vector3D::unit()
{
    Vector3D unit;
    unit.fx = fx / Mag();
    unit.fy = fy / Mag();
    unit.fz = fz / Mag();
    return unit;
}

Vector3D Vector3D::operator+(Vector3D vect)
{
    Vector3D vect3;
    vect3.fx = fx + vect.fx;
    vect3.fy = fy + vect.fy;
    vect3.fz = fz + vect.fz;
    return vect3;
}
