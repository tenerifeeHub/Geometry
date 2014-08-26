#include <iostream>
#include "Angle.h"
#include "Projection.h"
#include "Turn.h"

using namespace std;

void main() {
// ex1
    Point2D x(1,1), y(2,5), z(3,2), north(2, 6);
    cout<<Angle::GetAngle(x, y, z, north)<<endl;

// ex2
    Point2D p1,p2(3,0),p3(5,0);
    cout<<Turn::GetTurn(p1,p2,p3);

//ex3
    Point2D first(2, -81.559);
    Point2D second(58, 161.9340);
    Point2D a(42, 41.8890);
    Point2D point=Projection::GetProjection(first, second, a);
    cout<<point.GetX()<<" "<<point.GetY()<<endl;
    
    return 0;
}