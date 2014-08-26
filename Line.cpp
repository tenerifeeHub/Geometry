#include "Line.h"

void Line::CalculateSlope(Point2D point1,Point2D point2)
{
	m = (point1.GetY()-point2.GetY())/(point1.GetX()-point2.GetX());
}

Line::Line(Point2D point1,Point2D point2)
{
	CalculateSlope(point1,point2);
	b = -m*point1.GetX()+point1.GetY();
}

Line::~Line()
{

}

double Line::Slope()
{
	return m;
}

double Line::GetB()
{
	return b;
}

Point2D Line:: GetPointViaX(double x)
{
	return Point2D(x,m*x+b);
}