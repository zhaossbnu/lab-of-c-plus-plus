#include "Son.h"

Son::Son(void)
{

}

Son::~Son(void)
{

}

Son::Son(string name,string color)
{
	Set(name,color);
}

void Son::Show()
{
	cout<<"Son¡¯s Name is "<<GetNmae()<<" , hair color is "<<GetColor()<<"."<<endl;
}