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

void Date::Inputdate(int year,int month,int day)             //输入日期
{
    this->year=year;
    this->month=month;
    this->day=day;
}

void Date::Inputline(int l)                         //输入月份输出的列数
{
	line=l;
}

void Date::Outputdate()                             //输出日期
{
    cout<<year<<"-"<<month<<"-"<<day<<"\t";
}

int Date::weekdaynum(int y,int m,int d)             //输入年月日 获得该天的星期数返回值为0~6的常数
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

void Date::weekday(int year,int month,int day)           //输入年月日 输出星期
{
	string week[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	cout<<week[weekdaynum(year,month,day)];
}

void Date::print_the_current_month(int year,int month)         //打印当月月历
{
	cout<<" 日 一 二 三 四 五 六"<<endl;
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

void Date::print_the_current_year(int year,int l)      //打印当年年历
{
	if(l==1)                                        //一列输出年历
	{
		cout<<"        "<<year<<endl<<endl;
		for(int i=1;i<=12;i++)
		{
			cout<<"         "<<i<<endl<<endl;
			print_the_current_month(year,i);
			cout<<endl;
		}
	}
	if(l==2)                                         //两列输出年历
	{
		cout<<"                     "<<year<<endl<<endl;
		int count1,count2;
		for(int i=1;i<=12;i=i+2)
		{
			count1=count2=1;
			cout<<"         "<<i<<"                       "<<i+1<<endl<<endl;
			cout<<" 日 一 二 三 四 五 六\t 日 一 二 三 四 五 六"<<endl;

															//输出左边一个月的第一行
			for(int j=0;j<=weekdaynum(year,i,1);j++)			//输出第一行前空格
			{
				cout <<""<<setw(3);
			}
			for(int j=1;j<=7-weekdaynum(year,i,1);j++)			//输出第一行日历
			{
				cout <<j<<setw(3);
				count1++;
			}
			cout<<"\t";
															//输出右边一个月的第一行
			for(int j=0;j<=weekdaynum(year,i+1,1);j++)         //输出第一行前空格
			{
				cout <<""<<setw(3);
			}
			for(int j=1;j<=7-weekdaynum(year,i+1,1);j++)		//输出第一行日历
			{
				cout <<j<<setw(3);
				count2++;
			}
			cout<<endl;

			for(int k=1;k<=5;k++)                   //输出每个月剩下几行
			{
				for(int a=1;a<=7;a++)
				{
					if(count1>tab[leap(year)][i])			//数字大于该月日期总数，输出空格
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
	if(l==3)                                        //三列输出年历
	{
		cout<<"                                "<<year<<endl<<endl;
		int count1,count2,count3;
		for(int i=1;i<=12;i=i+3)
		{
			count1=count2=count3=1;
			cout<<"         "<<i<<"                       "<<i+1<<"                       "<<i+2<<endl<<endl;
			cout<<" 日 一 二 三 四 五 六\t 日 一 二 三 四 五 六\t 日 一 二 三 四 五 六"<<endl;

			for(int j=0;j<=weekdaynum(year,i,1);j++)       //输出左边一个月的第一行
			{
				cout <<""<<setw(3);
			}
			for(int j=1;j<=7-weekdaynum(year,i,1);j++)
			{
				cout <<j<<setw(3);
				count1++;
			}
			cout<<"\t";
			for(int j=0;j<=weekdaynum(year,i+1,1);j++)         //输出中间一个月的第一行
			{
				cout <<""<<setw(3);
			}
			for(int j=1;j<=7-weekdaynum(year,i+1,1);j++)
			{
				cout <<j<<setw(3);
				count2++;
			}
			cout<<"\t";
			for(int j=0;j<=weekdaynum(year,i+2,1);j++)             //输出右边一个月的第一行
			{
				cout <<""<<setw(3);
			}
			for(int j=1;j<=7-weekdaynum(year,i+2,1);j++)
			{
				cout <<j<<setw(3);
				count3++;
			}
			cout<<endl;

			for(int k=1;k<=5;k++)                           //输出每个月剩下几行
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
