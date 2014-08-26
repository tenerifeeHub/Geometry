#include "Turn.h"
#include <math.h>

char* Turn::GetTurn(Point2D p1, Point2D p2, Point2D p3)
{
	double angle1=atan2((p2.GetY()-p1.GetY()),(p2.GetX()-p1.GetX()));
	double angle2=atan2((p3.GetY()-p2.GetY()),(p3.GetX()-p2.GetX()));
	double angle=angle1-angle2;
	if(angle<0)
		return "Left!\n";
	else if(angle>0)
		return "Right!\n";
	else
		return "Points are collinear. Go forward!\n";
}
