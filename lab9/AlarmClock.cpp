#include "AlarmClock.h"

AlarmClock::~AlarmClock(void)
{

}

AlarmClock::AlarmClock(int hour1=0,int minute1=0,int second1=0,int hour2=0,int minute2=0,int second2=0)
{
	SetClock(hour1,minute1,second1);
	hour=hour2;
	minute=minute2;
	second=0;

}

void AlarmClock::Alarm(int t1,int t2)
{
	int i=0;
	if(t1>=60)
	{
		for(i=1;i<60;i++)
		{
			ShowTime();
			cout<<"\tàÖàÖàÖ......\a"<<"\r";
			Clock::Tick();
		}

		for(t1=t1-60;t1>=0;t1--)
		{
			ShowTime();
			cout<<"\t\t\t"<<"\r";
			Clock::Tick();
		}
	}
	else 
	{
		for(i=1;i<=t1;i++)
		{
			ShowTime();
			cout<<"\tàÖàÖàÖ......\a"<<"\r";
			Clock::Tick();
		}
	}
}

void AlarmClock::SetAlarmTime(int Newhour,int NewMinute,int NewSecond)
{
	hour=Newhour;
	minute=NewMinute;
	second=NewSecond;
}

int AlarmClock::Tick(int m,int s)
{
	int temp=m*60+s;
	int i=0;
	while(1)
	{
		if(i>=temp+1)
		{
			cout<<endl;
			cout<<"³¬³ö²âÊÔÊ±¼ä£¡ÄÖÖÓ²»Ïì£¡£¡£¡"<<endl;
			return 0;
		}
		if((hour==GetHour())&&(minute==GetMinute())&&(second==GetSecond()))
		{
			ShowTime();
			cout<<"\tàÖàÖàÖ......\a"<<"\r";
			break;
		}
		ShowTime();
		cout<<"\r";
		Clock::Tick();
		i++;
	}
	i--;
	Alarm(temp-i,temp);

	return 0;
}
