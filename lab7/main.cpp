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
	cout<<"��Ҫ�������㣨n>=5��: ";
	cin>>n;
	while(n<5)
	{
		cout<<"����������Ч�����������룺 ";
		cin>>n;
	}
	Fish *fish =new Fish[n];

	for(int i=0;i<n;i++)
	{
		cout<<"�������"<<i+1<<"��������֡���ɫ��";
		cin>>name>>color;
		fish[i].SetFish(name,color);
	}

	cout<<"��ʼ�����ˣ�"<<endl;
	int day=1;
	do
	{
		srand((int)time(0));
		int rd=rand()%Fish::GetTotal();
		cout<<"��"<<day<<"�죺"<<fish[rd].GetName()<<"�Ե���ʳ��"<<endl;
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
			cout<<"����"<<Fish::GetTotal()<<"�����ŵ��㣬���ǵ�����ǣ�"<<endl;
			cout<<"����    ��ɫ    ����    �ϴγ�ʳʱ��"<<endl;
			for(int i=0;i<Fish::GetTotal();i++)
				cout<<fish[i].GetName()<<"\t"<<fish[i].GetColor()<<"\t"<<fish[i].GetWeight()<<"\t"<<"��"<<fish[i].GetDay()<<"��"<<endl;
		}

		char ch;
		cout<<"��Ҫ����������(Y/N) : ";
		cin>>ch;
		if(ch=='Y'||ch=='y')
			break;	

		Sleep(1000);	
		day++;
	}while(Fish::GetTotal()>0);

	cout<<"�������!"<<endl;
	delete[] fish;
	return 0;
}