#pragma once
#include<string>
#include<iostream>
using namespace std;

class Student
{
public:
	friend class Teacher;
	Student(void);
	~Student(void);
	void SetName(string newname);
	string GetName();
	void ShowStudent();
	void AddCredit(int _credit);
	void AddScore(int _score);
private:
	string name;
	int credit,score;
};

