#include <iostream>
using namespace std;
int main()
{
    int myAge = 39;
    int yourAge = 39;
    cout<<"I was:    "<<myAge<<" years old.\n";
    cout<<"You were: "<<yourAge<<" years old.\n";
    myAge++;
    ++yourAge;
    cout<<"one year has passed...\n";
    cout<<"I was:    "<<myAge<<" years old.\n";
    cout<<"You were: "<<yourAge<<" years old.\n";
    cout<<"another year has passed...\n";
    cout<<"I was:    "<<myAge++<<" years old.\n";
    cout<<"You were: "<<++yourAge<<" years old.\n";
    cout<<"let's print it again.\n";
    cout<<"I was:    "<<myAge<<" years old.\n";
    cout<<"You were: "<<yourAge<<" years old.\n";
    return 0;
}
