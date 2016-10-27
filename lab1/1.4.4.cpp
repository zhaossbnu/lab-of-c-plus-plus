#include<iostream>
using namespace std;
int power(int *p1,int *p2);
int main(void)
{
    int m,n,*pm,*pn;
    cout<<"Enter m and n(n>=0):";
    cin>>m>>n;
    pm=&m;
    pn=&n;
    cout<<power(pm,pn);
    return 0;
}

int power(int *p1,int *p2)
{
    int pow=1,i;
    if(*p1!=0&&*p2==0)
        pow=1;
    if(*p2>0)
        for(i=1;i<=*p2;i++)
         pow=pow*(*p1);
    return pow;
}
