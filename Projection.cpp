#include "Projection.h"

Point2D Projection:: GetProjection(Point2D first, Point2D second, Point2D a)
{
	Line line(first, second);
	double m1=line.Slope();
	double m2=-1/m1;
	double xM=(line.GetB()+m2*a.GetX()-a.GetY()) / (m2-m1);
	double yM=m1*xM+line.GetB();
	Point2D projection(xM, yM);
	return projection;
}