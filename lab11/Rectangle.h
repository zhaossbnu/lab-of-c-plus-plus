#pragma once
#include<cmath>
#include"Point.h"
class Rectangle:public Point
{
public:
	Rectangle(double x1,double y1,double x2,double y2);
	virtual ~Rectangle(void);
	virtual void Show();
	virtual double Area();
	virtual double Zhouchang();
private:
	Point Point1,Point2;
};

