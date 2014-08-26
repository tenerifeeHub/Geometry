#pragma once
#include "Point2D.h"

class Line
{
	double m, b;
	bool isVertical, isHorizontal;
	void CalculateSlope(Point2D point1,Point2D point2);

	Point2D pointExample;
public:
	Line();
	Line(Point2D point1,Point2D point2);
	~Line();

	double Slope();
	double GetB();

	bool IsVertical();
	bool IsHorizontal();

	bool Contains(Point2D point);

	Point2D GetPointViaX(double x);
};
