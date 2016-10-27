#include "Student.h"

Student::Student(void)
{
	credit=0;
	score=0;
}

Student::~Student(void)
{

}

void Student::SetName(string newname)
{
	name=newname;
}

string Student::GetName()
{
	return name;
}

void Student::ShowStudent()
{
	cout<<name<<"\t"<<credit<<"\t"<<score;
}

void Student::AddCredit(int _credit)
{
	credit+=_credit;
}
void Student::AddScore(int _score)
{
	score+=_score;
}

