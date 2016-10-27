#pragma once
#include<string>
using namespace std;
class Fish
{
public:
	Fish(void);
	~Fish(void);
	void SetFish(string newname,string newcolor);
	static int GetTotal();
	static void ChangeTotal();
	void Eat(int d);
	void Decrease();
	int GetDay();
	int GetWeight();
	string GetName();
	string GetColor();
private:
	string name,color;
	int weight,day;
	static int Total;
};

