#include <math.h>
#include "Angle.h"

#define PI 3.14159265

Angle::Angle()
{
}

Angle::~Angle()
{
}

float Angle::GetAngle(Point2D a, Point2D b, Point2D c) {
    float ab = sqrt( (a.GetX()-b.GetX())*(a.GetX()-b.GetX()) + (a.GetY()-b.GetY())*(a.GetY()-b.GetY()) );
    float ac = sqrt( (a.GetX()-c.GetX())*(a.GetX()-c.GetX()) + (a.GetY()-c.GetY())*(a.GetY()-c.GetY()) );
    float bc = sqrt( (b.GetX()-c.GetX())*(b.GetX()-c.GetX()) + (b.GetY()-c.GetY())*(b.GetY()-c.GetY()) );
    float angle = acos( ( (ab*ab) + (ac*ac) - (bc*bc) ) / (2 * ab * ac) ) * 180 / PI;
    return angle;
}
