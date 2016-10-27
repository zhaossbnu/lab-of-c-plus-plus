#include<iostream>
#include<string>
using namespace std;

template<typename T>
T cmpValue(T temp1,T temp2)
{
    return temp1>temp2?temp2:temp1;
}

int main(void)
{

    cout<<"Compare int:"<<endl;
    int ia=0,ib=0;
    cout<<"Enter two integers:";
    cin>>ia>>ib;
    cout<<"The smaller one is:"<<cmpValue(ia,ib)<<endl<<endl;

    cout<<"Compare float:"<<endl;
    float fa=0,fb=0;
    cout<<"Enter two real numbers:";
    cin>>fa>>fb;
    cout<<"The smaller one is:"<<cmpValue(fa,fb)<<endl<<endl;


    cout<<"Compare string:"<<endl;
    string sa="0",sb="0";
    cout<<"Enter two strings:";
    cin>>sa>>sb;
    cout<<"The smaller one is:"<<cmpValue(sa,sb)<<endl<<endl;

    cout<<"Compare char[]:"<<endl;
    char a[100]="0",b[100]="0";
    cout<<"Enter two strings:";
    cin>>a>>b;
    cout<<"The smaller one is:"<<cmpValue((string)a,(string)b)<<endl;

    return 0;
}

