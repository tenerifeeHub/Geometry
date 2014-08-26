#include<iostream>
#include "Projection.h"

using namespace std;

void main()
{
	Point2D first(2, -81.559);
	Point2D second(58, 161.9340);
	Point2D a(42, 41.8890);
	Point2D point=Projection::GetProjection(first, second, a);
	cout<<point.GetX()<<" "<<point.GetY()<<endl;
}