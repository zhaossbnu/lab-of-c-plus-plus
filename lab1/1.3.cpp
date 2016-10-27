#include<iostream>
using namespace std;
int i=1;
int main()
{
    static int a;
    int b=-10;
    int c=0;
    void other(void);
    cout<<"---MAIN---\n";
    cout<<" i: "<<i<<" a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
    c=c+8;
    other();
    cout<<"---MAIN---\n";
    cout<<" i: "<<i<<" a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
    i=i+10;
    other();
}
void other(void)
{
    static int a=2;
    static int b;
    int c=10;
    a=a+2;
    i=i+32;
    c=c+5;
    cout<<"---OTHER---\n";
    cout<<" i: "<<i<<" a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
    b=a;
}
