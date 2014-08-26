#include "Inside.h"

bool Inside::IsInsidePolygon(Point2D* polygon, int polyCount, Point2D point)
{
	Point2D lineStart(0,point.y);

	for(int i=0;i<polyCount-1;i++)
	{
		if(Instersection(polygon[i],polygon[i+1],point,lineStart))
		{

		}
	}
}
