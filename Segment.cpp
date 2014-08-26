#include "Segment.h"

Segment::Segment(Point2D point1,Point2D point2)
{
	line(point1,point2);
	
	this->point1 = point1;
	this->point2 = point2;
}

Segment::~Segment()
{
}
