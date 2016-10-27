#include<iostream>
#include"Clock.h"
#include"AlarmClock.h"

using namespace std;

int main(void)
{
	int hour1,minute1,second1,hour2,minute2,minute3,second3;
	char ch;
	cout<<"“滴答滴答……”，小闹钟开始工作了！"<<endl;
	do
	{
		cout<<"请输入初始时间（时 分 秒）：";
		cin>>hour1>>minute1>>second1;
		while((hour1<0||hour1>23)||(minute1<0||minute1>59)||(second1<0||second1>59))
		{
				cout<<"时间格式错误！请重新输入初始时间（时 分 秒）：";
				cin>>hour1>>minute1>>second1;
		}

		cout<<"请输入闹铃时间（时 分）：";
		cin>>hour2>>minute2;
		while((hour2<0||hour2>23)||(minute2<0||minute2>59))
		{
				cout<<"时间格式错误！请重新输入闹铃时间（时 分）:";
				cin>>hour2>>minute2;
		}
		
		cout<<"请输入测试总时长（分 秒）：";
		cin>>minute3>>second3;	
		while((minute3<0||minute3>59)||(second3<0||second3>59))
		{
				cout<<"时间格式错误！请重新输入测试总时长（分 秒）：";
				cin>>minute3>>second3;
		}

		AlarmClock alarm(hour1,minute1,second1,hour2,minute2,0);

		alarm.Tick(minute3,second3);

		cout<<endl;
		cout<<"计时结束，还要继续吗（Y/N）？";
		cin>>ch;
		if(ch=='Y'||ch=='y')
			system("cls");
	
	}while(ch=='Y'||ch=='y');

	cout<<"程序结束了，再见！"<<endl;
	return 0;
}