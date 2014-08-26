#include <math.h>
#include <iostream>
#include "Angle.h"

using namespace std;

#define PI 3.14159265

Angle::Angle()
{
}

Angle::~Angle()
{
}

float getDistance(Point2D a, Point2D b) {
    float temp = sqrt( (a.GetX()-b.GetX())*(a.GetX()-b.GetX()) + (a.GetY()-b.GetY())*(a.GetY()-b.GetY()) );
    cout<<"Distance between ("<<a.GetX()<<","<<a.GetY()<<") and ("<<b.GetX()<<","<<b.GetY()<<") is "<<temp<<endl;
    return temp;
}

float Angle::GetAngle(Point2D a, Point2D b, Point2D c, Point2D north) {
    float ab = getDistance(a, b);
    float ac = getDistance(a, c);
    float bc = getDistance(b, c);
    float angle = acos( ( (ab*ab) + (ac*ac) - (bc*bc) ) / (2 * ab * ac) ) * 180 / PI;
    
    if( (getDistance(b, north) + getDistance(c, north))/2 < getDistance(a, north) ) {
        // internal angle
        return angle;
    } else {
        // external angle
        return (360-angle);
    }
}
