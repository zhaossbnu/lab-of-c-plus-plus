#include<iostream>
#include"Clock.h"
#include"AlarmClock.h"

using namespace std;

int main(void)
{
	int hour1,minute1,second1,hour2,minute2,minute3,second3;
	char ch;
	cout<<"���δ�δ𡭡�����С���ӿ�ʼ�����ˣ�"<<endl;
	do
	{
		cout<<"�������ʼʱ�䣨ʱ �� �룩��";
		cin>>hour1>>minute1>>second1;
		while((hour1<0||hour1>23)||(minute1<0||minute1>59)||(second1<0||second1>59))
		{
				cout<<"ʱ���ʽ���������������ʼʱ�䣨ʱ �� �룩��";
				cin>>hour1>>minute1>>second1;
		}

		cout<<"����������ʱ�䣨ʱ �֣���";
		cin>>hour2>>minute2;
		while((hour2<0||hour2>23)||(minute2<0||minute2>59))
		{
				cout<<"ʱ���ʽ������������������ʱ�䣨ʱ �֣�:";
				cin>>hour2>>minute2;
		}
		
		cout<<"�����������ʱ������ �룩��";
		cin>>minute3>>second3;	
		while((minute3<0||minute3>59)||(second3<0||second3>59))
		{
				cout<<"ʱ���ʽ�������������������ʱ������ �룩��";
				cin>>minute3>>second3;
		}

		AlarmClock alarm(hour1,minute1,second1,hour2,minute2,0);

		alarm.Tick(minute3,second3);

		cout<<endl;
		cout<<"��ʱ��������Ҫ������Y/N����";
		cin>>ch;
		if(ch=='Y'||ch=='y')
			system("cls");
	
	}while(ch=='Y'||ch=='y');

	cout<<"��������ˣ��ټ���"<<endl;
	return 0;
}