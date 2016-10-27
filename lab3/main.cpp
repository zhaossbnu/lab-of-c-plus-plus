#include<iostream>              //万年历
#include<string>
#include<iomanip>
#include<windows.h>
#include"Date.h"
using namespace std;

int main(void)                              //主函数
{
	cout<<"				欢迎使用万年历！"<<endl;
	cout<<"																		赵帅帅"<<endl;
    Date myDate;
    int year,month,day,line;
	int tab[2][13]=
    {
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
    };
    cout<<"Enter year month day:";
    cin>>year>>month>>day;
	while((year<=0)||(month<=0||month>=13)||(day<=0||day>tab[(year%4==0&&year%100!=0||year%400==0)][month]))
	{
		cout<<"Presentation error！Please enter again :";
		cin>>year>>month>>day;
	}

	while(year!=0&&month!=0&&day!=0)			//循环
	{
		myDate.Inputdate(year,month,day);
		myDate.Outputdate();
		myDate.weekday(year,month,day);
		cout<<endl<<"	"<<year<<" "<<month<<endl<<endl;
		myDate.print_the_current_month(year,month);
		cout<<"Here show year calender of "<<year<<endl;
		cout<<"How many months do you want to see in 1 line?(1~3):";
		cin>>line;
		cout<<endl;
		myDate.Inputline(line);
		myDate.print_the_current_year(year,line);
		cout<<"Enter year month day:";
		cin>>year>>month>>day;
	}

	cout<<"Year value error!"<<endl;

	return 0;
}
