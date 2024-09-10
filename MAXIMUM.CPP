#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Three Numbers Which You Want To Check :";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<a<<" Is Maximum";
	}
	else if(b>c)
	{
		cout<<b<<" Is Maximum";
	}
	else
	{
		cout<<c<<" Is Maximum";
	}
	getch();
}