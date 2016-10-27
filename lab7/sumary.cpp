/*201311212028	李楚杨*/
// 作业7 等差求和.cpp : Defines the entry point for the console application.
//
#include"stdfix.h"
#include<iostream>
using namespace std;

class Sum
{
private:
	static int count;
	static int sum;
public:
	Sum();//构造函数
	//static void Countnum();//
	static int Getsum();//返回各项和
	~Sum(){};
};

//构造函数
inline Sum::Sum()
{
	count++;
	sum=sum+count;
}

//返回各项和
inline int Sum::Getsum()
{
	return sum;
}

int Sum::count=0;
int Sum::sum=0;

int _tmain(int argc, _TCHAR* argv[])
{
	Sum a[100];

	cout<<"1-100各整数的和为"<<a[0].Getsum()<<endl;

	return 0;
}

