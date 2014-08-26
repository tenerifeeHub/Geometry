#pragma once
#include "Point2D.h"

class Angle
{
public:
	Angle(void);
	~Angle(void);
    static float GetAngle(Point2D a, Point2D b, Point2D c, Point2D north);
};
