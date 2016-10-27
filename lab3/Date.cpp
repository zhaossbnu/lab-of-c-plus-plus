#include "Date.h"
int tab[2][13]=
{
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};

Date::Date(void)
{
}

Date::~Date(void)
{
}

int leap(int year)
{
	if(year%4==0&&year%100!=0||year%400==0)
		return 1;
	else 
		return 0;
}

void Date::Inputdate(int year,int month,int day)             //��������
{
    this->year=year;
    this->month=month;
    this->day=day;
}

void Date::Inputline(int l)                         //�����·����������
{
	line=l;
}

void Date::Outputdate()                             //�������
{
    cout<<year<<"-"<<month<<"-"<<day<<"\t";
}

int Date::weekdaynum(int y,int m,int d)             //���������� ��ø��������������ֵΪ0~6�ĳ���
{
	int sum=0;   
    for(int i=1; i<y; i++)
    {
        if(leap(i)==0)
            sum+=(365%7);
        if(leap(i)==1)
            sum+=(366%7);
    }
    for(int k=0; k<m; k++)
        sum+=(tab[leap(y)][k]%7);
    sum=sum+d%7;
	return sum%7;
}

void Date::weekday(int year,int month,int day)           //���������� �������
{
	string week[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	cout<<week[weekdaynum(year,month,day)];
}

void Date::print_the_current_month(int year,int month)         //��ӡ��������
{
	cout<<" �� һ �� �� �� �� ��"<<endl;
	int count=weekdaynum(year,month,1);
	switch(count)
	{
		case 0: break;
		case 1:cout<<"   "; break;
		case 2:cout<<"   "<<"   "; break;
		case 3:cout<<"   "<<"   "<<"   "; break;
		case 4:cout<<"   "<<"   "<<"   "<<"   "; break;
		case 5:cout<<"   "<<"   "<<"   "<<"   "<<"   "; break;
		case 6:cout<<"   "<<"   "<<"   "<<"   "<<"   "<<"   "; break;
	}
	for(int k=1;k<=tab[leap(year)][month];k++)
	{
		count++;
		cout<<setw(3)<<k;
		if(count%7==0)
			cout<<endl;
	}
	cout<<endl;
}

void Date::print_the_current_year(int year,int l)      //��ӡ��������
{
	if(l==1)                                        //һ���������
	{
		cout<<"        "<<year<<endl<<endl;
		for(int i=1;i<=12;i++)
		{
			cout<<"         "<<i<<endl<<endl;
			print_the_current_month(year,i);
			cout<<endl;
		}
	}
	if(l==2)                                         //�����������
	{
		cout<<"                     "<<year<<endl<<endl;
		int count1,count2;
		for(int i=1;i<=12;i=i+2)
		{
			count1=count2=1;
			cout<<"         "<<i<<"                       "<<i+1<<endl<<endl;
			cout<<" �� һ �� �� �� �� ��\t �� һ �� �� �� �� ��"<<endl;

															//������һ���µĵ�һ��
			for(int j=0;j<=weekdaynum(year,i,1);j++)			//�����һ��ǰ�ո�
			{
				cout <<""<<setw(3);
			}
			for(int j=1;j<=7-weekdaynum(year,i,1);j++)			//�����һ������
			{
				cout <<j<<setw(3);
				count1++;
			}
			cout<<"\t";
															//����ұ�һ���µĵ�һ��
			for(int j=0;j<=weekdaynum(year,i+1,1);j++)         //�����һ��ǰ�ո�
			{
				cout <<""<<setw(3);
			}
			for(int j=1;j<=7-weekdaynum(year,i+1,1);j++)		//�����һ������
			{
				cout <<j<<setw(3);
				count2++;
			}
			cout<<endl;

			for(int k=1;k<=5;k++)                   //���ÿ����ʣ�¼���
			{
				for(int a=1;a<=7;a++)
				{
					if(count1>tab[leap(year)][i])			//���ִ��ڸ�����������������ո�
					{
						cout<<""<<setw(3);
						continue;
					}
					cout<<setw(3)<<count1;
					count1++;

				}
				cout<<"\t";
				for(int a=1;a<=7;a++)
				{
					if(count2>tab[leap(year)][i+1])
					{
						cout<<""<<setw(3);
						continue;
					}
					cout<<setw(3)<<count2;
					count2++;
					if(count2>=tab[leap(year)][i+1])
						cout<<""<<setw(3);
				}
				cout<<endl;

			}
			cout<<endl<<endl;

		}
	}
	if(l==3)                                        //�����������
	{
		cout<<"                                "<<year<<endl<<endl;
		int count1,count2,count3;
		for(int i=1;i<=12;i=i+3)
		{
			count1=count2=count3=1;
			cout<<"         "<<i<<"                       "<<i+1<<"                       "<<i+2<<endl<<endl;
			cout<<" �� һ �� �� �� �� ��\t �� һ �� �� �� �� ��\t �� һ �� �� �� �� ��"<<endl;

			for(int j=0;j<=weekdaynum(year,i,1);j++)       //������һ���µĵ�һ��
			{
				cout <<""<<setw(3);
			}
			for(int j=1;j<=7-weekdaynum(year,i,1);j++)
			{
				cout <<j<<setw(3);
				count1++;
			}
			cout<<"\t";
			for(int j=0;j<=weekdaynum(year,i+1,1);j++)         //����м�һ���µĵ�һ��
			{
				cout <<""<<setw(3);
			}
			for(int j=1;j<=7-weekdaynum(year,i+1,1);j++)
			{
				cout <<j<<setw(3);
				count2++;
			}
			cout<<"\t";
			for(int j=0;j<=weekdaynum(year,i+2,1);j++)             //����ұ�һ���µĵ�һ��
			{
				cout <<""<<setw(3);
			}
			for(int j=1;j<=7-weekdaynum(year,i+2,1);j++)
			{
				cout <<j<<setw(3);
				count3++;
			}
			cout<<endl;

			for(int k=1;k<=5;k++)                           //���ÿ����ʣ�¼���
			{
				for(int a=1;a<=7;a++)
				{
					if(count1>tab[leap(year)][i])
					{
						cout<<""<<setw(3);
						continue;
					}
					cout<<setw(3)<<count1;
					count1++;

				}
				cout<<"\t";
				for(int a=1;a<=7;a++)
				{
					if(count2>tab[leap(year)][i+1])
					{
						cout<<""<<setw(3);
						continue;
					}
					cout<<setw(3)<<count2;
					count2++;
					if(count2>=tab[leap(year)][i+1])
						cout<<""<<setw(3);
				}
				cout<<"\t";
				for(int a=1;a<=7;a++)
				{
					if(count3>tab[leap(year)][i+2])
					{
						cout<<""<<setw(3);
						continue;
					}
					cout<<setw(3)<<count3;
					count3++;
				}
				cout<<endl;

			}
			cout<<endl<<endl;

		}
	}
}
