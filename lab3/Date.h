#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include<windows.h>
using namespace std;
class Date
{
public:
	Date(void);
	~Date(void);
	void Inputdate(int y=0,int m=0,int d=0);        //��������
	void Inputline(int l=0);                        //�����·����������
    void Outputdate();                              //�������
	int weekdaynum(int y,int m,int d);              //���������� ��ø��������������ֵΪ0~6�ĳ���
    void weekday(int y,int m,int d);                //���������� �������
	void print_the_current_month(int y,int m);      //��ӡ��������
	void print_the_current_year(int y,int l);       //��ӡ��������
	friend int leap(int year);
private:
    int year,month,day,line;
};


