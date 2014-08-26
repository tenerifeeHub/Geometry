#include "Point2D.h"
#include <math.h>

Point2D::Point2D(double pointX,double pointY)
	:x(pointX),y(pointY)
{
}

double Point2D::GetX()
{	
	return x;
}

double Point2D::GetY()
{
	return y;
}

Point2D::~Point2D()
{
}

bool Point2D::operator==(Point2D point)
{
	return fabs(point.x - x) <0.0001 && fabs(y - point.y) < 0.0001;
}
