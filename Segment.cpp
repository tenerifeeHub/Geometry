#include "Segment.h"

Segment::Segment(Point2D point1,Point2D point2)
{
	line = Line(point1,point2);
	
	this->point1 = point1;
	this->point2 = point2;
}

Segment::~Segment()
{
}

bool Segment::ContainsPointInBlock(Point2D point)
{
	int minX, minY;
	int maxX, maxY;

	if(point1.GetX() < point2.GetX())
	{
		minX = point1.GetX();
		maxX = point2.GetX();
	}
	else
	{
		minX = point2.GetX();
		maxX = point1.GetX();
	}

	if(point1.GetY() < point2.GetY())
	{
		minY = point1.GetY();
		maxY = point2.GetY();
	}
	else
	{
		minY = point2.GetY();
		maxY = point1.GetY();
	}

	return minX <= point.GetX() && maxX >= point.GetX() && minY <= point.GetY() && maxY >= point.GetY();
}

bool Segment::Contains(Point2D point)
{
	return line.Contains(point) && ContainsPointInBlock(point);
}