#pragma once
#include "Line.h"

class Inside
{
	static Point2 Intersection(Line line1,Line line2);
public:
	static bool IsInsidePolygon(Point2D* polygon, int polyCount, Point2D point);
};
