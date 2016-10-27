#pragma once
#include<iostream>
#include<windows.h>
using namespace std;
class Clock
{
public:
	~Clock(void);
	Clock(int hour=0, int minute=0, int second=0);
	void SetClock(int hour=0,int minute=0,int second=0);
	int GetHour();
	int GetMinute();
	int GetSecond();
   	void ShowTime();				
	void Tick();
	void SetTime(int NewH, int NewM, int NewS);	
	void AddTime(int AddH,int AddM, int AddS);
private: 
   	int Hour, Minute, Second;
};

