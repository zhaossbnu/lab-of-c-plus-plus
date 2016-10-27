#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class HEX
{
public:
	char sign;						//符号位:  ”+”表示正，”-”表示负，0的符号记为”+”
	char m_num[10];					//可以存放10位十六进制数据，这样可以确保2个4位十六进制数据+和*的结果不会溢出
public:
	HEX();							//构造函数，初始化成符号位为”+”，数据全‘0’
	HEX(int n);						//用整数创建十六进制数据，（即整数转换成十六进制数据）
	~HEX();
	unsigned GetBit(int i);				//获得每一位数据的十进制数值（不含符号位）
	operator int();						//把十六进制数据转换成十进制数据
	int length();						//获得数据的长度
	HEX operator+(HEX n);				//加法
	HEX operator-(HEX n);				//减法
	HEX operator*(HEX n);				//乘法
	HEX operator/(HEX n);					//整除，即只要得到商
	HEX operator%(HEX n);				//取模，即只要得到余数
	HEX& operator++();					//前置++
	HEX operator++(int); 					//后置++
	friend istream& operator>>(istream& i, HEX& n);		//输入十六进制数
	friend ostream& operator<<(ostream& o, HEX n);		//输出十六进制数

};

