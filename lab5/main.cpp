/*������9.8?

��������涼�ܺ�

Ӧ�ÿ������ڵ���Ч��

��Ҫ֪ͨ��
	�����������������ı�׼�𰸷ǳ�����
	��������̸
*/
#include<iostream>
#include<string>
using namespace std;

class Date
{
public:
	Date()
	{
		cout<<"����һ�����ڶ���!"<<endl;
	}
    Date(int y,int m,int d)
    {
        year=y;
        month=m;
        day=d;
        cout<<"����һ�����ڶ���!"<<endl;
    }
    ~Date()
    {
        cout<<"����һ�����ڶ���!"<<endl;
    }
    void SetDate(int y, int m, int d)
    {
		year=y;
        month=m;
        day=d;
    }
    void Show()
    {
        cout<<year<<"��"<<month<<"��"<<day<<"��"<<"\t";
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
        cout<<"����һ���������!"<<endl;
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
	cout<<"������һ���������!"<<endl;
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
	cout<<"���������������ա��Ա�(m/f)��";
	cin>>name>>year>>month>>day>>gender;
	Person Peter(name,year,month,day,gender);
	Peter.Show();

	cout<<"����������������";
	cin>>name;
	cout<<"�������������գ�";
	cin>>year>>month>>day;
	Peter.SetName(name);
	Peter.SetBirthday(year,month,day);
	Peter.Show();

	cout<<"ֻ������������գ�";
	cout<<Peter.GetName()<<"\t";
	Date linshi=Peter.GetBirthday();
	linshi.Show();


    return 0;
}

