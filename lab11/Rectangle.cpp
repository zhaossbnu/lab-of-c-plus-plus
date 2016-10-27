#include "Rectangle.h"

Rectangle::Rectangle(double x1,double y1,double x2,double y2):Point1(x1,y1),Point2(x2,y2)
{
	cout<<"A rectangle has been constructed."<<endl;
}

Rectangle::~Rectangle(void)
{

}

void Rectangle::Show()
{
	cout<<"Rectangle";
}

double Rectangle::Area()
{
	return fabs((Point1.GetX()-Point2.GetX())*(Point1.GetY()-Point2.GetY()));
}

double Rectangle::Zhouchang()
{
	return 2*(fabs(Point1.GetX()-Point2.GetX())+fabs(Point1.GetY()-Point2.GetY()));
}