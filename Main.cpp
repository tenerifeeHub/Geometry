#include <iostream>

#include "Angle.h"
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
// ex1
    cout<<"Angle between points"<<endl;
    Point2D x(1,1), y(2,5), z(3,2), north(2, 6);
    cout<<Angle::GetAngle(x, y, z, north)<<endl;

// ex2
    cout<<endl<<"Get turn"<<endl;
    Point2D p1,p2(3,0),p3(5,0);
    cout<<Turn::GetTurn(p1,p2,p3);

//ex3
    cout<<endl<<"Get point projection"<<endl;
    Point2D first(2, -81.559);
    Point2D second(58, 161.9340);
    Point2D a(42, 41.8890);
    Point2D point=Projection::GetProjection(first, second, a);
    cout<<point.GetX()<<" "<<point.GetY()<<endl;

// ex4
    cout<<endl<<"If point is inside polygon"<<endl;
    int n = 5;

    cout.width(4);
    cout<<" ";
    Point2D* polygon = new Point2D[5];
    polygon[0] = Point2D(1,3);
    polygon[1] = Point2D(2,3);
    polygon[2] = Point2D(3,2);
    polygon[3] = Point2D(4,3);
    polygon[4] = Point2D(3,4);

    for(double j=0;j<4;j += 0.2) {
        cout.width(4);
        cout<<j;
    }
    cout<<endl;
    for(double i=0;i<4;i += 0.2)
    {
        cout.width(4);
        cout<<i;
        for(double j=0;j<4;j += 0.2)
        {
            cout.width(4);
            cout<<(Inside::IsInsidePolygon(polygon,n,Point2D(j,i)) == true ? " " : "1");
        }
        cout<<endl;
    }
	delete [] polygon;

// extra 

	RectangleOverlapTest();
   
    return 0;
}