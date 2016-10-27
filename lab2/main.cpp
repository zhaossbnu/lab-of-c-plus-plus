//阅10
//GOOD


#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

struct ysf
{
	int num;
	string name;
	struct ysf *next;
};

int main(void)
{
	int number,d,count;
	char ch;
	string name;
	do
	{
		struct ysf *head,*tail;//,*ptr1,*ptr2;
		head=tail=NULL;
		cout<<"请输入人数：";
		cin>>number;
		cout<<"请输入循环人数：";
		cin>>d;
		for(int i=1;i<=number;i++)
		{	
			ysf *ptr=new ysf();
			ptr->num=i;
			cout<<"请输入第"<<i<<"个人的姓名：";
			cin>>ptr->name;
			ptr->next=NULL;
			if(head==NULL)
				head=ptr;
			else
				tail->next=ptr;
			tail=ptr;
		}
		tail->next=head;
		count=1;
		ysf *ptr1=tail,*ptr2=head,*ptr0;
		for(;number>0;count++)
		{
			if(count%d==0)
			{
				cout<<ptr2->name<<ends;
				ptr0=ptr2;
				ptr2=ptr2->next;
				delete ptr0;
				ptr1->next=ptr2;
				number--;
			} 
			else
			{
					ptr1=ptr1->next;
					ptr2=ptr2->next;
			}
		}
		cout<<"\n继续吗（Y/N）：";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	if(ch=='N'||ch=='n')
	{
		cout<<"再见！\n";
	}	
	return 0;
}