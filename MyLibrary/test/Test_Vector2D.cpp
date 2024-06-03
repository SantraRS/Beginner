#include <iostream>
#include "Vector2D.h"
#include <cassert>
int main()
{
    Vector2D vect(3, 4);
    vect.Print();
    assert(("Test failed  : ", vect.Mag()==5));
    
    return 0;
}