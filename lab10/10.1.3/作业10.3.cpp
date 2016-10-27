#include<iostream>
#include<string>
#include"Father.h"
#include"Son.h"

using namespace std;

int main(void)
{
	Father f("David","black");
	Son s("John","brown");

	f.Show();
	s.Show();
	
	return 0;
}