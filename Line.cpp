#include "Line.h"
#include<math.h>

Line::Line()
{

}


void Line::CalculateSlope(Point2D point1,Point2D point2)
{
	if(point1.GetX() == point2.GetX())
	{
		isVertical = true;
		b = point1.GetX();
	}
	else
	{
		if(point1.GetY() == point2.GetY())
		{
			isHorizontal = true;
		}
		else
		{
			isHorizontal = false;
		}
		isVertical = false;
		m = (point1.GetY()-point2.GetY())/(point1.GetX()-point2.GetX());
		b = -m*point1.GetX()+point1.GetY();
	}
}

bool Line::IsVertical()
{
	return isVertical;
}

bool Line::IsHorizontal()
{
	return isHorizontal;
}

Line::Line(Point2D point1,Point2D point2)
{
	CalculateSlope(point1,point2);
	pointExample = point1;
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

Point2D Line::GetPointViaX(double x)
{
	return Point2D(x,m*x+b);
}

bool Line::Contains(Point2D point)
{
	if(isVertical)
		return b == point.GetX();
	return fabs(m*point.GetX()+b - point.GetY()) < 0.00001;
}