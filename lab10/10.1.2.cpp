//类B1、B2、D1中的nv都改成 protected 
#include <iostream>
using namespace std;

class B1
{
public:
	void fun()
	{
		cout<<nV<<", Member of B1"<<endl;
	}
protected:
	int nV;
};

class B2
{
public:
	void fun()
	{
		cout<<nV<<", Member of B2"<<endl;
	}
protected:
		int nV;
};

class D1:public B1,public B2
{
public:
	void Setd1nV(int temp1,int temp2,int temp3)
	{
		nV=temp1;
		B1::nV=temp2;
		B2::nV=temp3;
	}
	void fun()
	{
		cout<<nV<<", Member of D1"<<endl;
	}
protected:
		int nV;
};

int main()
{	
	D1 d1;
	//d1.nV = 1;
	//d1.B1::nV = 2;
	//d1.B2::nV = 3;
	d1.Setd1nV(1,2,3);
	d1.fun();

	d1.B1::fun();
	
	d1.B2::fun();

	return 0;
}
