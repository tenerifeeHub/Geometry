#pragma once
#include "Point2D.h"

class Projection
{
public:
	static double GetSlope(Point2D first, Point2D second);
	static double GetProjection(Point2D first, Point2D second, Point2D a);
};
