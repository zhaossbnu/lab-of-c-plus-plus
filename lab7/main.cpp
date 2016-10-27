#include<iostream>
#include<string>
#include<windows.h>
#include<time.h>
#include"Fish.h"
using namespace std;

int main(void)
{
	string name,color;
	int n;
	cout<<"您要养几条鱼（n>=5）: ";
	cin>>n;
	while(n<5)
	{
		cout<<"输入数据无效！请重新输入： ";
		cin>>n;
	}
	Fish *fish =new Fish[n];

	for(int i=0;i<n;i++)
	{
		cout<<"请输入第"<<i+1<<"条鱼的名字、颜色：";
		cin>>name>>color;
		fish[i].SetFish(name,color);
	}

	cout<<"开始养鱼了！"<<endl;
	int day=1;
	do
	{
		srand((int)time(0));
		int rd=rand()%Fish::GetTotal();
		cout<<"第"<<day<<"天："<<fish[rd].GetName()<<"吃到了食物"<<endl;
		fish[rd].Eat(day);
		
		for(int i=0;i<Fish::GetTotal();i++)
		{
			if((day-fish[i].GetDay())>=5&&(day-fish[i].GetDay())%5==0)
			{
				fish[i].Decrease();
			}
			if(fish[i].GetWeight()<=0||fish[i].GetWeight()>=300)
			{
				fish[i]=fish[Fish::GetTotal()-1];
				Fish::ChangeTotal();
				//delete &fish[Fish::GetTotal()-1];
			}
		}

		if(day%10==0)
		{
			cout<<"还有"<<Fish::GetTotal()<<"条活着的鱼，它们的情况是："<<endl;
			cout<<"名字    颜色    体重    上次吃食时间"<<endl;
			for(int i=0;i<Fish::GetTotal();i++)
				cout<<fish[i].GetName()<<"\t"<<fish[i].GetColor()<<"\t"<<fish[i].GetWeight()<<"\t"<<"第"<<fish[i].GetDay()<<"天"<<endl;
		}

		char ch;
		cout<<"您要结束养鱼吗？(Y/N) : ";
		cin>>ch;
		if(ch=='Y'||ch=='y')
			break;	

		Sleep(1000);	
		day++;
	}while(Fish::GetTotal()>0);

	cout<<"程序结束!"<<endl;
	delete[] fish;
	return 0;
}