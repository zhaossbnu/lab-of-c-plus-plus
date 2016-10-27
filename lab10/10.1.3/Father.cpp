#include "Father.h"

Father::Father(void)
{

}

Father::~Father(void)
{

}

Father::Father(string name,string color)
{
	m_strName=name;
	m_strHairColor=color;
}

void Father::Set(string name,string color)
{
	m_strName=name;
	m_strHairColor=color;
}

string Father::GetNmae()
{
	return m_strName;
}

string Father::GetColor()
{
	return m_strHairColor;
}

void Father::Show()
{
	cout<<"Father¡¯s Name is "<<m_strName<<" , hair color is "<<m_strHairColor<<"."<<endl;
}