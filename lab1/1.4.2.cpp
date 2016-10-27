#include<iostream>
using namespace std;
int power(int m,int n);
int main(void)
{
    int m,n;
    cout<<"Enter m and n(n>=0):";
    cin>>m>>n;
    cout<<power(m,n);
    return 0;
}

int power(int m,int n)
{
    int pow;
    if(m!=0&&n==0)
        pow=1;
    if(n>0)
        pow=m*power(m,n-1);
    return pow;
}
