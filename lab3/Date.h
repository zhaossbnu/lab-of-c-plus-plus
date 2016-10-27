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
	void Inputdate(int y=0,int m=0,int d=0);        //输入日期
	void Inputline(int l=0);                        //输入月份输出的列数
    void Outputdate();                              //输出日期
	int weekdaynum(int y,int m,int d);              //输入年月日 获得该天的星期数返回值为0~6的常数
    void weekday(int y,int m,int d);                //输入年月日 输出星期
	void print_the_current_month(int y,int m);      //打印当月月历
	void print_the_current_year(int y,int l);       //打印当年年历
	friend int leap(int year);
private:
    int year,month,day,line;
};


