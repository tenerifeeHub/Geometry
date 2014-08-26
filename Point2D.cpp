#include "Point2D.h"

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
