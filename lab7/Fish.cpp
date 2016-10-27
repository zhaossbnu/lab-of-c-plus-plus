#include "Fish.h"

Fish::Fish(void)
{
	Total++;
}

Fish::~Fish(void)
{

}

int Fish::Total=0;

void Fish::SetFish(string newname,string newcolor)
{
	name=newname;
	color=newcolor;
	weight=100;
	day=0;
}

int Fish::GetTotal()
{
	return Total;
}

void Fish::ChangeTotal()
{
	Total--;
}

void Fish::Eat(int d)
{
	weight+=10;
	day=d;
}

void Fish::Decrease()
{
	weight-=10;
}

int Fish::GetDay()
{
	return day;
}

int Fish::GetWeight()
{
	return weight;
}

string Fish::GetName()
{
	return name;
}

string Fish::GetColor()
{
	return color;
}
