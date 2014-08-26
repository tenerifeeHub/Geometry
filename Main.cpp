#include<iostream>
#include "Turn.h"
using namespace std;

void main()
{
	Point2D p1,p2(3,0),p3(5,0);
	cout<<Turn::GetTurn(p1,p2,p3);
}