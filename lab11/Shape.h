#pragma once
#include<iostream>
using namespace std;
class Shape
{
public:
	Shape();
	virtual ~Shape();
	void GetInfo();
	virtual void Show() =0;
	virtual double Area() = 0;
	virtual double Zhouchang () = 0;
};

