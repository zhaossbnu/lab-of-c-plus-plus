#include "HEX.h"
char Hex_num[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

HEX::HEX()
{
	sign='+';
	for(int i=0;i<10;i++)
		m_num[i]='0';
}

HEX::HEX(int n)		//生成16进制数范围(-80000000-7FFFFFFF)
{
	if(n>=0)
		sign='+';
	else
		sign='-';
	int a=abs(n),i=0;
	char temp[10];
	do
	{   
		long a1=a%16;
		a=a/16;

		temp[i]=Hex_num[a1];
		i++;
	}while(a!=0);

	int temp1=i,j=0;
	for(j=0;j<temp1&&i>=0;j++,i--)
		m_num[j]=temp[i-1];
	if(j<10)
		m_num[j]='\0';

}

HEX::~HEX(void)
{

}

unsigned HEX::GetBit(int i)					//0<=i<=9
{
/*
	if(m_num[i]<='9'&&m_num[i]>='0')
		return (unsigned)(m_num[i]-48);
	if(m_num[i]<='F'&&m_num[i]>='A')
		return (unsigned)(m_num[i]-55);
*/
	for(int j=0;j<16;j++)
	{
		if(Hex_num[j]==m_num[i])
			return j;
	}
}

HEX::operator int()
{
	int temp=0;
	for(int i=0;i<length()&&m_num[i]!='\0';i++)
	{
		temp=temp+GetBit(i)*(int)pow(16,length()-i-1);
	}
	if(sign=='+')
		return temp;
	if(sign=='-')
		return -temp;
}

int HEX::length()
{
	int i=0;
	while(i<=9&&m_num[i]!='\0')
		i++;
	return i;
}

HEX HEX::operator+(HEX n)
{
	int temp=(int)*this+(int)n;
	return HEX(temp);
}

HEX HEX::operator-(HEX n)
{
	int temp=(int)*this-(int)n;
	return HEX(temp);
}

HEX HEX::operator*(HEX n)
{
	int temp=(int)*this*(int)n;
	return HEX(temp);
}

HEX HEX::operator/(HEX n)
{
	int temp=(int)*this/(int)n;
	return HEX(temp);
}

HEX HEX::operator%(HEX n)
{
	int temp=(int)*this%(int)n;
	return HEX(temp);
}

HEX& HEX::operator++()
{
	*this=HEX((int)(*this)+1); 
	return *this;
}

HEX HEX::operator++(int)
{
	HEX old=*this;
	++(*this);
	return old;
}

istream& operator>>(istream& in, HEX& n)
{
	char ch;
	int i=0;
	ch=getchar();
	if((ch=='-')||(ch=='+'))
	{
		n.sign=ch;
		while((ch=getchar())!='\n')
		{
			n.m_num[i]=ch;
			i++;
		}
		if(i<10)
			n.m_num[i]='\0';
	}
	else
	{
		n.m_num[0]=ch;
		i=1;
		n.sign='+';
		while((ch=getchar())!='\n')
		{
			n.m_num[i]=ch;
			i++;
		}
		if(i<10)
			n.m_num[i]='\0';
	}
	return in;
}

ostream& operator<<(ostream& out, HEX n)
{
	if(n.sign=='-')
	{
		out<<"(";
		out<<n.sign;
		for(int i=0;i<=9&&n.m_num[i]!='\0';i++)
			out<<n.m_num[i];
		out<<")";
	}
	if(n.sign=='+')
	{
		for(int i=0;i<=9&&n.m_num[i]!='\0';i++)
			out<<n.m_num[i];
	}
	return out;
}
