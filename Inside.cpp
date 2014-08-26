#include "Inside.h"

bool Inside::IsInsidePolygon(Point2D* polygon, int polyCount, Point2D point)
{
	Point2D lineStart(0,point.y);

	for(int i=0;i<polyCount-1;i++)
	{
		Point2D intersection = Instersection(polygon[i],polygon[i+1],point,lineStart)
		if()
		{
			i++;
		}
	}
}

Point2D Instersection(Line line1,Line line2)
{
	x = (line1.GetB()-line.GetB())/(line1.Slope()-line2.Slope());
	return line1.GetPointViaX(x);
}