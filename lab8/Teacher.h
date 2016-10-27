#pragma once
#include"Student.h"
#include<iostream>
#include<string>
using namespace std;
class Teacher
{
public:
	Teacher(void);
	~Teacher(void);
	void SetName(string _name);
	string GetName();
	void Add_Credit(Student &stud,int _credit);
	void Add_Score(Student &stud,int _score);
private:
	string name;
};

