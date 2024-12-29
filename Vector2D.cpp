#include <iostream>
#include <cmath>
using namespace std;
template <typename T>

class Vector2D{
public:
    T fx;
    T fy;

public:
    // Default constructor
    Vector2D()
    {
    fx = 1.0;
    fy = 1.0;
    }
// Parameterized constructor
Vector2D(T x, T y)
{
    fx = x;
    fy = y;
}
// Function to calculate difference among Vector2Ds
T Mag()
{
    T d = sqrt((fx * fx) + (fy * fy));
    return d;
}

// function to add two Vector2Ds
Vector2D add(Vector2D vect1, Vector2D vect2)
{
    Vector2D vect3;
    vect3.fx = vect1.fx + vect2.fx;
    vect3.fy = vect1.fy + vect2.fy;
    return vect3;
}
Vector2D add(Vector2D vect)
{
    Vector2D vect3;
    vect3.fx = fx + vect.fx;
    vect3.fy = fy + vect.fy;
    return vect3;
}
void Print()
{
    cout << fx << "," << fy << endl;
}

T dot(Vector2D vect1, Vector2D vect2)
{
    T dot;
    dot = (vect1.fx * vect2.fx) + (vect1.fy * vect2.fy);
    return dot;
}
T dot(Vector2D vect2)
{
    T dot;
    dot = (fx * vect2.fx) + (fy * vect2.fy);
    return dot;
}
T angle(Vector2D vect)
{
    T dot = this->dot(vect);
    T mag1 = this->Mag();
    T mag2 = vect.Mag();
    T a = acos(dot / (mag1 * mag2));
    return a;
}

Vector2D unit()
{
    Vector2D unit;
    unit.fx = fx / Mag();
    unit.fy = fy / Mag();
    return unit;
}

Vector2D scale(T s)
{
    Vector2D scaled;
    scaled.fx = fx * s;
    scaled.fy = fy * s;
    return scaled;
}

Vector2D operator+(Vector2D vect)
{
    Vector2D vect3;
    vect3.fx = fx + vect.fx;
    vect3.fy = fy + vect.fy;
    return vect3;
}
T GetX()
{
    return fx;
}

T GetY()
{
    return fy;
}
};

int main()
{
    vector<Vector2D<int> *> vecOf2D;
    vecOf2D.push_back(new Vector2D<int>(1, 3));

    vecOf2D[0]->Print();
    
    return 0;
}