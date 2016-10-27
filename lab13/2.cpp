#include<iostream>
using namespace std;

template<typename T>
void sort(T a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp=i;
            if(a[temp]>a[j])
                temp=j;
            T temp1=a[i];
            a[i]=a[temp];
            a[temp]=temp1;
        }
    }
}

int main(void)
{
    int n=0;

    cout<<"Sort int:"<<endl;
    cout<<"Please enter the length of the array:";
    cin>>n;
    int *a=new int[n];
    cout<<"Please enter the array elements:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    delete a;
    cout<<endl<<endl;

    cout<<"Sort char a[]:"<<endl;
    cout<<"Please enter the length of the array:";
    cin>>n;
    char *c=new char[n];
    cout<<"Please enter the array elements:";
    for(int i=0;i<n;i++)
        cin>>c[i];
    sort(c,n);
    for(int i=0;i<n;i++)
        cout<<c[i]<<" ";
    delete c;
    cout<<endl<<endl;

    cout<<"Sort string:"<<endl;
    cout<<"Please enter the length of the array:";
    cin>>n;
    string *b=new string[n];
    cout<<"Please enter the array elements:";
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(b,n);
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    delete b;
    cout<<endl<<endl;

    return 0;
}
