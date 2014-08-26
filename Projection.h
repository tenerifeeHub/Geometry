#pragma once
#include "Point2D.h"
#include "Line.h"

class Projection
{
public:
	static Point2D GetProjection(Point2D first, Point2D second, Point2D a);
};
