#include<iostream>
using namespace std;
int power(int &rm,int &rn);
int main(void)
{
    int m,n;
    cout<<"Enter m and n(n>=0):";
    cin>>m>>n;
    cout<<power(m,n);
    return 0;
}

int power(int &rm,int &rn)
{
    int pow=1,i;
    if(rm!=0&&rn==0)
        pow=1;
    if(rn>0)
        for(i=1;i<=rn;i++)
         pow=pow*rm;
    return pow;
}
