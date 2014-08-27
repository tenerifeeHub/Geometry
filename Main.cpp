#include <iostream>
#include "Inside.h"
#include "Projection.h"
#include "Turn.h"
#include "OverlapingRectangles.h"

using namespace std;

void RectangleOverlapTest()
{
	Point2D* drept1 = new Point2D[5];

	drept1[0] = Point2D(3,1);
	drept1[1] = Point2D(5,1);
	drept1[2] = Point2D(5,5);
	drept1[3] = Point2D(3,5);

	Point2D* drept2 = new Point2D[4];

	drept2[0] = Point2D(1,2);
	drept2[1] = Point2D(7,2);
	drept2[2] = Point2D(7,4);
	drept2[3] = Point2D(1,4);

	(OverlapingRectangles::RectOverlap(drept1,drept2))?cout<<"Rectangles overlap":cout<<"Rectangles don't overlap";
	cout<<endl;
}

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
	delete [] polygon;

	RectangleOverlapTest();

//ex2
	Point2D p1,p2(3,0),p3(5,0);
	cout<<Turn::GetTurn(p1,p2,p3);
//ex3
	Point2D first(2, -81.559);
	Point2D second(58, 161.9340);
	Point2D a(42, 41.8890);
	Point2D point=Projection::GetProjection(first, second, a);
	cout<<point.GetX()<<" "<<point.GetY()<<endl;
}