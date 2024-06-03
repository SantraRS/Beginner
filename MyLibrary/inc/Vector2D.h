#ifndef Vector2D_h
#define Vector2D_h

#include <iostream>
#include <cmath>
using namespace std;
class Vector2D
{
private:
    double fx;
    double fy;

public:
    // Default constructor
    Vector2D();

    // Parameterized constructor
    Vector2D(double x, double y);
    // Function to calculate difference among Vector2D2Ds
    double Mag();

    // function to add two Vector2Ds
    Vector2D add(Vector2D vect1, Vector2D vect2);
    Vector2D add(Vector2D vect);
    void Print();
    double dot(Vector2D vect1, Vector2D vect2);
    double dot(Vector2D vect2);
    double angle(Vector2D vect);

    Vector2D unit();

    Vector2D scale(double s);

    Vector2D operator+(Vector2D vect);
};

#endif