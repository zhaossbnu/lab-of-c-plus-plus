#include<iostream>
#include<windows.h>
#include"HEX.h"
using namespace std;


int main(void)
{
	HEX n1(0),n2(0),n3(0);
	char repeat('Y');
	do
	{	
		n1 = 0; n2 =0 ; n3 =0;
		cout<<"Please input a Hex number(>=-FFFF, <=FFFF, Hex characters: 0-9 or A-F):";
		cin>>n1;
		while(n1.length()>=5||n1.length()<=0)
		{
			cout<<"Input error!Please input again:";
			cin>>n1;
		}
		cout<<"Please input a Hex number(>=-FFFF, <=FFFF, Hex characters: 0-9 or A-F):";
		cin>>n2;
		while((n2.length()>=5||n2.length()<=0)||(int)n2==0)
		{
			cout<<"Input error!Please input again:";
			cin>>n2;
		}
		n3 = n1+n2;
		cout<<n1<<'+'<<n2<<'='<<n3<<endl;
		n3 = n1-n2;
		cout<<n1<<'-'<<n2<<'='<<n3<<endl;
		n3 = n1*n2;
		cout<<n1<<'*'<<n2<<'='<<n3<<endl;
		n3 = n1/n2;
		cout<<n1<<'/'<<n2<<'='<<n3<<endl;
		n3 = n1%n2;
		cout<<n1<<'%'<<n2<<'='<<n3<<endl;

		cout<<"Repeat?(Y/N)";
		cin>>repeat;
		getchar();
		system("cls");
	}while(repeat=='Y'||repeat=='y');

	return 0;
}