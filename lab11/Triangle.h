#pragma once
#include<math.h>
#include"Point.h"
class Triangle:public Point
{
public:
	Triangle(double x1,double y1,double x2,double y2,double x3,double y3);
	virtual ~Triangle(void);
	virtual void Show();
	virtual double Area();
	virtual double Zhouchang ();
private:
	Point Point1,Point2,Point3;
	double a,b,c;
};

