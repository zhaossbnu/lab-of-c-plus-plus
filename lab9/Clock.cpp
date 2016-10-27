#include "Clock.h"

Clock::~Clock(void)
{

}

Clock::Clock(int hour, int minute, int second)
{
	Hour=(hour*3600+minute*60+second)/3600%24;
	Minute=(minute*60+second)/60%60;
	Second=second%60;
}

void Clock::SetClock(int hour,int minute,int second)
{
	Hour=(hour*3600+minute*60+second)/3600%24;
	Minute=(minute*60+second)/60%60;
	Second=second%60;
}

int Clock::GetHour()
{
	return Hour;
}

int Clock::GetMinute()
{
	return Minute;
}

int Clock::GetSecond()
{
	return Second;
}

void Clock::ShowTime()
{
	cout<<Hour/10<<Hour%10<<":"<<Minute/10<<Minute%10<<":"<<Second/10<<Second%10;
}

void Clock::Tick()
{
	Second++;
	if(Second>=60)
	{
		Minute++;
		Second%=60;
	}
	if(Minute>=60)
	{
		Hour++;
		Minute%=60;
	}
	if(Hour>=24)
	{
		Hour=0;
	}
	Sleep(1000);
}

void Clock::SetTime(int NewH, int NewM, int NewS)
{
	Hour=NewH;
	Minute=NewM;
	Second=NewS;
}

void Clock::AddTime(int AddH,int AddM, int AddS)
{
	Hour+=AddH;
	Minute+=AddM;
	Second+=AddS;
	SetTime(Hour,Minute,Second);
}