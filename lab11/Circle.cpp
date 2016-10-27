#include "Circle.h"

Circle::Circle(double xx,double yy,double r):point(xx,yy)
{
	radius=r;
	cout<<"A circle has been constructed."<<endl;
}

Circle::~Circle(void)
{

}

void Circle::Show()
{
	cout<<"Circle";
}

double Circle::Area()
{
	return 3.14*radius*radius;	
}

double Circle::Zhouchang()
{
	return 2*3.14*radius;
}