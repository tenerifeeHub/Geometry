#include <iostream>

#include "Angle.h"

using namespace std;

int main()
{
    Point2D x(1,1), y(2,4), z(3,2);

    cout<<Angle::GetAngle(x, y, z)<<endl;
    return 0;
}