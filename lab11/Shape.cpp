#include "Shape.h"

Shape::Shape(void)
{
	
}

Shape::~Shape(void)
{

}

void Shape::GetInfo()
{
	cout<<"This is a ";
	Show();
	cout<<endl<<"Its area is "<<Area();
	cout<<endl<<"Its perimeter is "<<Zhouchang()<<endl;
}