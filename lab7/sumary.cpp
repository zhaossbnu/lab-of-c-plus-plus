/*201311212028	�����*/
// ��ҵ7 �Ȳ����.cpp : Defines the entry point for the console application.
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
	Sum();//���캯��
	//static void Countnum();//
	static int Getsum();//���ظ����
	~Sum(){};
};

//���캯��
inline Sum::Sum()
{
	count++;
	sum=sum+count;
}

//���ظ����
inline int Sum::Getsum()
{
	return sum;
}

int Sum::count=0;
int Sum::sum=0;

int _tmain(int argc, _TCHAR* argv[])
{
	Sum a[100];

	cout<<"1-100�������ĺ�Ϊ"<<a[0].Getsum()<<endl;

	return 0;
}

