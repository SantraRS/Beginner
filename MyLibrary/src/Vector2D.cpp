#include <iostream>
#include <cmath>
#include "Vector2D.h"
using namespace std;

// Default constructor
Vector2D::Vector2D()
{
    fx = 1.0;
    fy = 1.0;
}

// Parameterized constructor
Vector2D::Vector2D(double x, double y)
{
    fx = x;
    fy = y;
}
// Function to calculate difference among Vector2Ds
double Vector2D::Mag()
{
    double d = sqrt((fx * fx) + (fy * fy));
    return d;
}

// function to add two Vector2Ds
Vector2D Vector2D::add(Vector2D vect1, Vector2D vect2)
{
    Vector2D vect3;
    vect3.fx = vect1.fx + vect2.fx;
    vect3.fy = vect1.fy + vect2.fy;
    return vect3;
}
Vector2D Vector2D::add(Vector2D vect)
{
    Vector2D vect3;
    vect3.fx = fx + vect.fx;
    vect3.fy = fy + vect.fy;
    return vect3;
}
void Vector2D::Print()
{
    cout << fx << "," << fy << endl;
}

double Vector2D::dot(Vector2D vect1, Vector2D vect2)
{
    double dot;
    dot = (vect1.fx * vect2.fx) + (vect1.fy * vect2.fy);
    return dot;
}
double Vector2D::dot(Vector2D vect2)
{
    double dot;
    dot = (fx * vect2.fx) + (fy * vect2.fy);
    return dot;
}
double Vector2D::angle(Vector2D vect)
{
    double dot = this->dot(vect);
    double mag1 = this->Mag();
    double mag2 = vect.Mag();
    double a = acos(dot / (mag1 * mag2));
    return a;
}

Vector2D Vector2D::unit()
{
    Vector2D unit;
    unit.fx = fx / Mag();
    unit.fy = fy / Mag();
    return unit;
}

Vector2D Vector2D::scale(double s)
{
    Vector2D scaled;
    scaled.fx = fx * s;
    scaled.fy = fy * s;
    return scaled;
}

Vector2D Vector2D::operator+(Vector2D vect)
{
    Vector2D vect3;
    vect3.fx = fx + vect.fx;
    vect3.fy = fy + vect.fy;
    return vect3;
}
