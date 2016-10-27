#include "Teacher.h"
Teacher::Teacher(void)
{

}

Teacher::~Teacher(void)
{

}

void Teacher::SetName(string _name)
{
	name=_name;
}

string Teacher::GetName()
{
	return name;
}

void Teacher::Add_Credit(Student &stud,int _credit)
{
	stud.credit+=_credit;
}
void Teacher::Add_Score(Student &stud,int _score)
{
	stud.score+=_score;
}


