/*总评：9.8?

程序各方面都很好

应该考虑日期的有效性

重要通知：
	本程序与曾经发布的标准答案非常相似
	请与我面谈
*/
#include<iostream>
#include<string>
using namespace std;

class Date
{
public:
	Date()
	{
		cout<<"构造一个日期对象!"<<endl;
	}
    Date(int y,int m,int d)
    {
        year=y;
        month=m;
        day=d;
        cout<<"构造一个日期对象!"<<endl;
    }
    ~Date()
    {
        cout<<"析构一个日期对象!"<<endl;
    }
    void SetDate(int y, int m, int d)
    {
		year=y;
        month=m;
        day=d;
    }
    void Show()
    {
        cout<<year<<"年"<<month<<"月"<<day<<"日"<<"\t";
    }
private:
    int year,month,day;
};

class Person
{
public:
    Person(string Newname ,int y,int m,int d, char Newgender);
    ~Person()
    {
        cout<<"析构一个人类对象!"<<endl;
    }
    void SetName(string	Newname);
    void SetBirthday(int y, int m, int d);
    string GetName();
    Date GetBirthday();
	void Show();
private:
    string name;
    Date birthday;
    char gender;
};

Person::Person(string Newname,int y,int m,int d,char Newgender)
{
	name=Newname;
	birthday.SetDate(y,m,d);	
	gender=Newgender;
	cout<<"构造了一个人类对象!"<<endl;
}


void Person::SetName(string Newname)
{
	name=Newname;
}

void Person::SetBirthday(int y,int m,int d)
{
	birthday.SetDate(y,m,d);
}

Date Person::GetBirthday()
{
	return birthday;
}


string Person::GetName()
{
	return name;
}

void Person::Show()
{
	cout<<name<<"\t";
	birthday.Show();
	cout<<gender<<endl;

}

int main(void)
{
	int year,month,day;
	string name;
	char gender;
	cout<<"请输入姓名、生日、性别(m/f)：";
	cin>>name>>year>>month>>day>>gender;
	Person Peter(name,year,month,day,gender);
	Peter.Show();

	cout<<"请重新输入姓名：";
	cin>>name;
	cout<<"请重新输入生日：";
	cin>>year>>month>>day;
	Peter.SetName(name);
	Peter.SetBirthday(year,month,day);
	Peter.Show();

	cout<<"只输出姓名和生日：";
	cout<<Peter.GetName()<<"\t";
	Date linshi=Peter.GetBirthday();
	linshi.Show();


    return 0;
}

