#include<iostream>
using namespace std;
int main()
{
	int a;
	system("color a");
	cout<<"Enter The Number";
	cin>>a;
	if (a%2==0)
	{
		system("color b4");
		cout<<a<<"is Even Number";
	}
	else
	{
	system("color c");
	cout<<a<<"is odd Number";
	}
}
