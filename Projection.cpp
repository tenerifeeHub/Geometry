#include "Projection.h"

double Projection::GetSlope(Point2D first, Point2D second)
{
	return (first.GetY()-second.GetY()) / (first.GetX()-second.GetX());
}

double Projection:: GetProjection(Point2D first, Point2D second, Point2D a)
{


}