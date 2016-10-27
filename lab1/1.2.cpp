#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
    int intOne;
    int& rSomeRef = intOne;
    intOne = 5;
    cout<<"intOne:\t"<<intOne<<endl;	//制表位，遇到“\t”表示跳到下一个制表位上。制表位宽度为8个字符，所以每个制表位起始位置是：第1，第9，第17.。。个字符处
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
