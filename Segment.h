#pragma once
#include "Line.h"
#include "Segment.h"

class Segment
{
	Line line;
	Point2D point1, point2;
public:
	Segment(Point2D point1,Point2D point2);
	~Segment();

	bool Contains(Point2D point);
	bool ContainsPointInBlock(Point2D point);
};
