#pragma once
#include"Shape.h"
class Point:public Shape 
{
public:
	Point(double x1=0,double y1=0);
	virtual ~Point(void);
	virtual void Show();
	virtual double Area();
	virtual double Zhouchang ();
	double GetX();
	double GetY();
private:
	double x,y;
};

