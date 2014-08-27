#include "OverlapingRectangles.h"
#include "Inside.h"

bool OverlapingRectangles::OverlapSegment(Point2D point1,Point2D point2,Point2D point3,Point2D point4)
{
	Line line1(point1,point2);
	Line line2(point3,point4);

	Point2D intersection;
	if(line1.IsVertical())
	{
		if(line2.IsVertical())
		{
			return false;
		}
		intersection = Inside::VerticalIntersection(line1,line2);
	}
	else
	{
		if(line2.IsVertical())
		{
			intersection = Inside::VerticalIntersection(line2,line1);
		}
		intersection = Inside::Intersection(line1,line2);
	}
	Segment polygonSegment1(point1,point2);
	Segment polygonSegment2(point3,point4);

	return polygonSegment1.ContainsPointInBlock(intersection) && polygonSegment2.ContainsPointInBlock(intersection);
}

bool OverlapingRectangles::RectOverlap(Point2D* d1, Point2D* d2)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(OverlapSegment(d1[i],d1[i+1],d2[j],d2[j+1]))
			{
				return true;
			}
		}
		if(OverlapSegment(d1[i],d1[i+1],d2[3],d2[0]))
			return true;
	}
	for(int j=0;j<3;j++)
	{
		if(OverlapSegment(d1[3],d1[0],d2[j],d2[j+1]))
		{
			return true;
		}
	}

	return false;
}