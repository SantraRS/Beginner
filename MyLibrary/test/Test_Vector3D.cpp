#include <iostream>
#include "Vector3D.h"
#include <cassert>
int main()
{
    Vector3D vect(2,4,4);
    vect.Print();
    assert(("Test 1 failed  : ", vect.Mag()==6));

    return 0;
}