#pragma once
#include "Point2D.h"

class OverlapingRectangles
{
	static bool OverlapSegment(Point2D point1,Point2D point2,Point2D point3,Point2D point4);
public:
	static bool RectOverlap(Point2D* d1, Point2D* d2);
};
