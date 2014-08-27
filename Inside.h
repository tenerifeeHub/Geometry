#pragma once
#include "Segment.h"

class Inside
{
	static bool PassLine(Line testLine, Point2D point1,Point2D point2,Point2D point);
public:
	static Point2D Intersection(Line line1, Line line2);
	static Point2D VerticalIntersection(Line line1,Line line2);

	static bool IsInsidePolygon(Point2D* polygon, int polyCount, Point2D point);
};
