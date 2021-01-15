#include<iostream>
using namespace std;
int main()
{
	int a;
	system("color a");
	cout<<"Enter a Number ";
	cin>>a;
	if(a%2==0)
	{
		system("cls");
		system("color b");
		cout<<"Even!!";
	}
	else
	{
		system("cls");
		system("color d");
		cout<<"Odd@@";
	}
}
