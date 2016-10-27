#pragma once
#include<iostream>
#include<windows.h>
using namespace std;
#include"Clock.h"
class AlarmClock:public Clock
{
public:
	~AlarmClock(void);
	AlarmClock(int hour1,int minute1,int second1,int hour2,int minute2,int second2);
	void Alarm(int t1,int t2);
	void SetAlarmTime(int Newhour=0,int NewMinute=0,int NewSecond=0);
	int Tick(int m,int s);
private:
	int hour,minute,second;
};


