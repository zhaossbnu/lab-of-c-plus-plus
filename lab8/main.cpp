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
	cout<<"����Ҫ������λѧ���ͼ�λ��ʦ��";
	cin>>m>>n;
	while(m<5||n<3)
	{
		cout<<"������Ч������������";
		cin>>m>>n;
	}
	Student *student=new Student[m];
	Teacher *teacher=new Teacher[n];
	for(int i=0;i<m;i++)
	{
		cout<<"�������"<<i+1<<"λѧ����������";
		cin>>s_name;
		student[i].SetName(s_name);
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"�������"<<i+1<<"λ��ʦ��������";
		cin>>t_name;
		teacher[i].SetName(t_name);
	}
	cout<<endl;
	do
	{
		cout<<"��ѡ��һλ��ʦ:";
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

		cout<<"��ѡ��һλѧ����";
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

		cout<<"������Ҫ���ӵ�ѧ�֣�";
		int AddCredit;
		cin>>AddCredit;
		teacher[t_num].Add_Credit(student[s_num],AddCredit);
		cout<<"��ʦ"<<teacher[t_num].GetName()<<"��ѧ��"<<student[s_num].GetName()<<"����ѧ�֣������ɹ���"<<endl;

		cout<<"������Ҫ���ӵ��ܳɼ���";
		int AddScore;
		cin>>AddScore;
		teacher[t_num].Add_Score(student[s_num],AddScore);
		cout<<"��ʦ"<<teacher[t_num].GetName()<<"��ѧ��"<<student[s_num].GetName()<<"�����ܳɼ��������ɹ���"<<endl;

		cout<<endl;
		cout<<"��Ҫ������(Y/N):";
		cin>>ch;
		
		if(ch=='n'||ch=='N')
		{
			cout<<endl;
			cout<<"����\tѧ��\t�ܳɼ�"<<endl;
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
	cout<<endl<<"�������!"<<endl;
	return 0;
}