#pragma once
#include "Point2D.h"

class Line
{
	double m, b;
	CalculateSlope(Point2D point1,Point2D point2);
public:
	Line(Point2D point1,Point2D point2);
	~Line();

	double Slope();
	double GetB();

	Point2D GetPointViaX(int x);
};
