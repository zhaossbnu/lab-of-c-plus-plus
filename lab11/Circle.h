#pragma once
#include<iostream>
#include"Point.h"
using namespace std;
class Circle:public Point
{
public:
	Circle(double xx,double yy,double r);
	virtual ~Circle(void);
	virtual void Show();
	virtual double Area();
	virtual double Zhouchang();
private:
	double radius;
	Point point;
};

