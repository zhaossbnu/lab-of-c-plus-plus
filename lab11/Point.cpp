#include "Point.h"

Point::Point(double x1,double y1)
{
	x=x1;
	y=y1;
}

Point::~Point(void)
{

}

void Point::Show()
{
	cout<<"Point";
}

double Point::Area()
{
	return 0;
}

double Point::Zhouchang()
{
	return 0;
}

double Point::GetX()
{
	return x;
}

double Point::GetY()
{
	return y;
}
