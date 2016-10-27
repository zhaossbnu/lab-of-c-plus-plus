#pragma once

#include<iostream>
#include"Father.h"
using namespace std;
class Son:public Father
{
public:
	Son(void);
	~Son(void);
	Son(string name,string color);
	void Show();
};

