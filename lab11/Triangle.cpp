#include "Triangle.h"

Triangle::Triangle(double x1,double y1,double x2,double y2,double x3,double y3):Point1(x1,y1),Point2(x2,y2),Point3(x3,y3)
{
	a=sqrt(pow(Point1.GetX()-Point2.GetX(),2)+pow(Point1.GetY()-Point2.GetY(),2));
	b=sqrt(pow(Point2.GetX()-Point3.GetX(),2)+pow(Point2.GetY()-Point3.GetY(),2));
	c=sqrt(pow(Point3.GetX()-Point1.GetX(),2)+pow(Point3.GetY()-Point1.GetY(),2));
	cout<<"A triangle has been constructed."<<endl;
}

Triangle::~Triangle(void)
{

}

void Triangle::Show()
{
	cout<<"Triangle";
}

double Triangle::Area()
{
	double p=(a+b+c)/2;
	double area=sqrt(p*(p-a)*(p-b)*(p-c));
	return area;
}

double Triangle::Zhouchang()
{
	return a+b+c;
}