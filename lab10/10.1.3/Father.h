#pragma once

#include<iostream>
#include<string>
using namespace std;
class Father
{
public:
	Father(void);
	~Father(void);
	Father(string name,string color);
	void Set(string name,string color);
	string GetNmae();
	string GetColor();
	void Show();
private:
	string m_strName,m_strHairColor;
};

