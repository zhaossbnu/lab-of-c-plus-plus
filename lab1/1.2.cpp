#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
    int intOne;
    int& rSomeRef = intOne;
    intOne = 5;
    cout<<"intOne:\t"<<intOne<<endl;	//�Ʊ�λ��������\t����ʾ������һ���Ʊ�λ�ϡ��Ʊ�λ���Ϊ8���ַ�������ÿ���Ʊ�λ��ʼλ���ǣ���1����9����17.�������ַ���
    cout<<"rSomeRef:\t"<<rSomeRef<<endl;
    cout<<"&intOne:\t"<<&intOne<<endl;
    cout<<"&rSomeRef:\t"<<&rSomeRef<<endl;
    int intTwo = 8;
    rSomeRef = intTwo;
    cout<<"\nintOne:\t"<<intOne<<endl;
    cout<<"intTwo:\t"<<intTwo<<endl;
    cout<<"rSomeRef:\t"<<rSomeRef<<endl;
    cout<<"&intOne:\t"<<&intOne<<endl;
    cout<<"&intTwo:\t"<<&intTwo<<endl;
    cout<<"&rSomeRef:\t"<<&rSomeRef<<endl;
    system("pause");
    return 0;
}
