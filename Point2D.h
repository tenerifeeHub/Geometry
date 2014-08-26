#pragma once

class Point2D
{
	double x,y;
public:
	Point2D(double pointX = 0,double pointY = 0);
	~Point2D();

	double GetX();
	double GetY();
};
