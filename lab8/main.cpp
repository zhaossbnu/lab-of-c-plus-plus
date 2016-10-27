#include<iostream>
#include<string>
#include"Teacher.h"
#include"Student.h"

using namespace std;

int main(void)
{
	string t_name,s_name;
	int m,n;
	char ch;
	cout<<"您需要建立几位学生和几位教师：";
	cin>>m>>n;
	while(m<5||n<3)
	{
		cout<<"数据无效！请重新输入";
		cin>>m>>n;
	}
	Student *student=new Student[m];
	Teacher *teacher=new Teacher[n];
	for(int i=0;i<m;i++)
	{
		cout<<"请输入第"<<i+1<<"位学生的姓名：";
		cin>>s_name;
		student[i].SetName(s_name);
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"请输入第"<<i+1<<"位老师的姓名：";
		cin>>t_name;
		teacher[i].SetName(t_name);
	}
	cout<<endl;
	do
	{
		cout<<"请选择一位教师:";
		cin>>t_name;
		int t_num;
		for(int i=0;i<n;i++)
		{
			if(teacher[i].GetName()==t_name)
			{
				t_num=i;
				break;
			}
		}

		cout<<"请选择一位学生：";
		cin>>s_name;
		int s_num;
		for(int i=0;i<m;i++)
		{
			if(student[i].GetName()==s_name)
			{
				s_num=i;
				break;
			}
		}
		cout<<endl;

		cout<<"请输入要增加的学分：";
		int AddCredit;
		cin>>AddCredit;
		teacher[t_num].Add_Credit(student[s_num],AddCredit);
		cout<<"教师"<<teacher[t_num].GetName()<<"给学生"<<student[s_num].GetName()<<"增加学分，操作成功。"<<endl;

		cout<<"请输入要增加的总成绩：";
		int AddScore;
		cin>>AddScore;
		teacher[t_num].Add_Score(student[s_num],AddScore);
		cout<<"教师"<<teacher[t_num].GetName()<<"给学生"<<student[s_num].GetName()<<"增加总成绩，操作成功。"<<endl;

		cout<<endl;
		cout<<"还要继续吗？(Y/N):";
		cin>>ch;
		
		if(ch=='n'||ch=='N')
		{
			cout<<endl;
			cout<<"姓名\t学分\t总成绩"<<endl;
			for(int i=0;i<m;i++)
			{
				student[i].ShowStudent();
				cout<<endl;
			}
			break;
		}
		cout<<endl;
	}while(ch=='y'||ch=='Y');

	delete[] student;
	delete[] teacher;
	cout<<endl<<"程序结束!"<<endl;
	return 0;
}