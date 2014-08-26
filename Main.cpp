#include <iostream>

#include "Angle.h"
#include "Inside.h"
#include "Projection.h"
#include "Turn.h"

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
//      }
//  }
//}

void main() {

// ex1
    Point2D x(1,1), y(2,5), z(3,2), north(2, 6);
    cout<<Angle::GetAngle(x, y, z, north)<<endl;

// ex2
    Point2D p1,p2(3,0),p3(5,0);
    cout<<Turn::GetTurn(p1,p2,p3);

//ex3
    Point2D first(2, -81.559);
    Point2D second(58, 161.9340);
    Point2D a(42, 41.8890);
    Point2D point=Projection::GetProjection(first, second, a);
    cout<<point.GetX()<<" "<<point.GetY()<<endl;

// ex4
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

    
    return 0;
}