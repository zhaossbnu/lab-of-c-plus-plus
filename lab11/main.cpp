#include<iostream>
#include<cmath>
#include"Shape.h"
#include"Point.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Triangle.h"

using namespace std;
int main(void)
{
	int n,i;
	char ch;
	cout<<"How many shapes do you want to construct? ";
	cin>>n;
	while(n<=0)
	{
		cout<<"Input error!Please enter an unsigned integer:";
		cin>>n;
	}
	Shape **shape=new Shape*[n];
	for(i=0;i<n;i++)
	{
		char choice;
		cout<<"Please enter No."<<i+1<<"'s shape(P--Point¡¢C--Circle¡¢R--Rectangle¡¢T--Triangle)£º";
		cin>>choice;
		switch(choice)
		{
		case 'p':
		case 'P':
			cout<<"Please enter the coord of the point:";
			double xp,yp;
			cin>>xp>>yp;
			shape[i]=new Point(xp,yp);
			cout<<"A point has been constructed."<<endl;
			break;
		case 'c':
		case 'C':
			cout<<"Please enter the circle radius and center coordinates£º";
			double xc,yc,r;
			cin>>xc>>yc>>r;
			while(r<=0)
			{
				cout<<"Input error!Can't construct a circle !Please Input radius again:";
				cin>>r;
			}
			shape[i]=new Circle(xc,yc,r);
			break;
		case 'r':
		case 'R':
			cout<<"Please enter the two vertices of the rectangle diagonal coordinates£º";
			double xr1,yr1,xr2,yr2;
			cin>>xr1>>yr1>>xr2>>yr2;
			while(xr1==xr2||yr1==yr2)
			{
				cout<<"Input error!Can't construct a rectangle!Please Input again:";
				cin>>xr1>>yr1>>xr2>>yr2;
			}
			shape[i]=new Rectangle(xr1,yr1,xr2,yr2);
			break;
		case 't':
		case 'T':
			cout<<"Please enter the three triangle vertex coordinates£º";
			double xt1,yt1,xt2,yt2,xt3,yt3;
			cin>>xt1>>yt1>>xt2>>yt2>>xt3>>yt3;
			while(((yt2-yt1)*(xt3-xt1))==((yt3-yt1)*(xt2-xt1)))
			{
				cout<<"Input error!Can't construct a triangle!Please Input again:";
				cin>>xt1>>yt1>>xt2>>yt2>>xt3>>yt3;
			}
			shape[i]=new Triangle(xt1,yt1,xt2,yt2,xt3,yt3);
			break;
		default:
			cout<<"Shape error£¡"<<endl;
			break;
		}
		cout<<"Continue?(Y/N):";
		cin>>ch;
		if(ch=='n'||ch=='N')
			break;
	}
	if(i==n)
		i--;
	cout<<"These are "<<i+1<<" shapes' information :"<<endl;
	for(int j=0;j<i+1;j++)
	{
		cout<<"shape"<<j+1<<':'<<endl;
		shape[j]->GetInfo();
		delete shape[j];
	}

	return 0;
}
