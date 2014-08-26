#include<iostream>
#include "Inside.h"

using namespace std;

//bool SegmentsIntersect(Point2D point1,Point2D point2,Point2D point3,point4)
//{
//	Line line1(point1,point2);
//	Line line2(point1,point2);
//	Point2D intersection;
//
//	if(line1.IsVertical())
//	{
//		intersection = Inside::VerticalIntersection(line,testLine);
//	}
//	else
//	{
//		intersection = Inside::Intersection(line,testLine);
//	}	
//	Segment polygonSegment1(point1,point2);
//	Segment polygonSegment2(point3,point4);
//
//	return polygonSegment1.ContainsPointInBlock(intersection) && polygonSegment2.ContainsPointInBlock(intersection) ;
//}
//
//bool RectOverlap(Point2D* d1, Point2D* d2)
//{
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			if(
//		}
//	}
//}

void main()
{
	int n = 5;

	Point2D* polygon = new Point2D[5];
	polygon[0] = Point2D(1,3);
	polygon[1] = Point2D(2,3);
	polygon[2] = Point2D(3,2);
	polygon[3] = Point2D(4,3);
	polygon[4] = Point2D(3,4);

	cout<<" \t";
	for(double j=0;j<4;j += 0.2)
		cout<<j<<" ";
	for(double i=0;i<4;i += 0.2)
	{
		cout<<i<<"\t";
		for(double j=0;j<4;j += 0.2)
		{
			cout<<Inside::IsInsidePolygon(polygon,n,Point2D(j,i));
		}
		cout<<endl;
	}

	//Point2D* drept1 = new Point2D[4];

	//polygon[0] = Point2D(1,1);
	//polygon[1] = Point2D(1,3);
	//polygon[2] = Point2D(3,3);
	//polygon[3] = Point2D(3,1);

	//Point2D* drept2 = new Point2D[4];

	//polygon[0] = Point2D(2,2);
	//polygon[1] = Point2D(2,4);
	//polygon[2] = Point2D(3,4);
	//polygon[3] = Point2D(4,2);

	//cout<<RectOverlap(drept1,drep2);
}