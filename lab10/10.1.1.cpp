//（1）	类B1、B2、D1中的nv都改成 private 
#include <iostream>
using namespace std;

class B1
{
public:
	void SetB1nV(int temp)
	{
		nV=temp;
	}
	void fun()
	{
		cout<<nV<<", Member of B1"<<endl;
	}
private:
	int nV;
};

class B2
{
public:
	void SetB2nV(int temp)
	{
		nV=temp;
	}
	void fun()
	{
		cout<<nV<<", Member of B2"<<endl;
	}
private:
		int nV;
};

class D1:public B1,public B2
{
public:
	void Setd1nV(int temp)
	{
		nV=temp;
	}
	void fun()
	{
		cout<<nV<<", Member of D1"<<endl;
	}
private:
		int nV;
};

int main()
{	
	D1 d1;
	//d1.nV = 1;
	d1.Setd1nV(1);
	d1.fun();

	//d1.B1::nV = 2;
	d1.SetB1nV(2);
	d1.B1::fun();
	
	//d1.B2::nV = 3;
	d1.SetB2nV(3);
	d1.B2::fun();

	return 0;
}
