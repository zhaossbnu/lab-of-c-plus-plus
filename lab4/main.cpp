#include<iostream>
#include<stdlib.h>
using namespace std;

class CMoney
{
public:
    CMoney()
    {
        yuan=0;
        jiao=0;
        fen=0;
        cout<<"无参构造函数被调用!"<<"\t"<<this<<endl;
    }
    CMoney(int newyuan,int newjiao,int newfen)
    {
        yuan=(newyuan*100+newjiao*10+newfen)/100;
        jiao=(newjiao+newfen/10)%10;
        fen=newfen%10;
        cout<<"有参构造函数被调用!"<<"\t"<<this<<endl;
    }
    CMoney(CMoney &p)
    {
        yuan=p.yuan;
        jiao=p.jiao;
        fen=p.fen;
        cout<<"拷贝构造函数被调用!"<<"\t"<<this<<endl;
    }
	~CMoney()
	{
		cout<<"析构函数被调用!"<<"\t"<<this<<endl;
	}
    void SetValue(int newyuan=0,int newjiao=0,int newfen=0)
	{
		yuan=(newyuan*100+newjiao*10+newfen)/100;
        jiao=(newjiao+newfen/10)%10;
        fen=newfen%10;
	}
    void Show();
    void GetYuan(int newyuan);
    void GetJiao(int newjiao);
    void GetFen(int newfen);
private:
    int yuan,jiao,fen;
};

void CMoney::Show()
{
	cout<<yuan<<"\t"<<jiao<<"\t"<<fen<<endl;
}

void CMoney::GetYuan(int newyuan)
{
	yuan=newyuan;
}

void CMoney::GetJiao(int newjiao)
{
	jiao=newjiao;
}

void CMoney::GetFen(int newfen)
{
	fen=newfen;
}

int main(void)
{
	{
		CMoney m;
		int yuan,jiao,fen;
		cout<<"Enter yuan jiao fen:";
		cin>>yuan>>jiao>>fen;
		CMoney m1(yuan,jiao,fen);
		CMoney m2(m);
	}
	cout<<endl;
	{
		CMoney *pm=new CMoney;
		int yuan,jiao,fen;
		cout<<"Enter yuan jiao fen:";
		cin>>yuan>>jiao>>fen;
		CMoney *pm1=new CMoney(yuan,jiao,fen);
		(*pm).SetValue(yuan,jiao,fen);
		CMoney m2(*pm);
		delete pm;
		delete pm1;
	}
	cout<<endl;
	{
		CMoney money[10];
	}
    return 0;
}
