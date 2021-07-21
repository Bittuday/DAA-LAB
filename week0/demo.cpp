#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int year;
	cout<<"enter the year to check whether it is leap year or not::";
	cin>>year;
	if(year%400==0 ||year%100!=0 &&year%4==0)
	{
		cout<<year<<"  is a leap year";
		
	}
	else
	cout<<year<<"  is not a leap year";
	getch();
	return 0;
}
