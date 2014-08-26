#include "Inside.h"


Point2D Inside::Intersection(Line line1,Line line2)
{
	double x = (line2.GetB()-line1.GetB())/(line1.Slope()-line2.Slope());
	return line2.GetPointViaX(x);
}

Point2D Inside::VerticalIntersection(Line line1,Line line2)
{
	double x = line1.GetB();
	return line2.GetPointViaX(x);
}

bool Inside::PassLine(Line testLine, Point2D point1,Point2D point2,Point2D point)
{
	Line line(point1,point2);
	Point2D intersection;

	if(line.IsVertical())
	{
		intersection = VerticalIntersection(line,testLine);
	}
	else
	{
		intersection = Intersection(line,testLine);
	}	
	Segment polygonSegment(point1,point2);

	return intersection.GetX() <= point.GetX() && polygonSegment.ContainsPointInBlock(intersection);
}

double MinX(Point2D* polygon, int polyCount)
{
	double min = polygon[0].GetX();
	for(int i=1;i<polyCount;i++)
	{
		if(polygon[i].GetX() < min)
		{
			min = polygon[i].GetX();
		}
	}
	return min;
}

bool Inside::IsInsidePolygon(Point2D* polygon, int polyCount, Point2D point)
{
	Line testLine(point,Point2D(MinX(polygon,polyCount),point.GetY()));
	int counter = 0;

	for(int i=0;i<polyCount;i++)
	{
		if(point == polygon[i])
		{
			return true;
		}
	}
	
	for(int i=0;i<polyCount-1;i++)
	{
		Segment segment(polygon[i],polygon[i+1]);
		if(segment.Contains(point))
		{
			return true;
		}
	}
	if(Segment(polygon[polyCount-1],polygon[0]).Contains(point))
		return true;


	for(int i=0;i<polyCount-1;i++)
	{		
		if(PassLine(testLine,polygon[i],polygon[i+1],point))
		{
			counter++;
		}
	}
	if(PassLine(testLine,polygon[polyCount-1],polygon[0],point))
	{
		counter++;
	}

	return counter%2==1;
}
