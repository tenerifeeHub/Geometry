#include <iostream>

#include "Angle.h"

using namespace std;

int main()
{
    Point2D x(1,1), y(2,5), z(3,2), north(2, 6);

    cout<<Angle::GetAngle(x, y, z, north)<<endl;
    return 0;
}