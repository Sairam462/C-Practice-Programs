#include<iostream>
using namespace std;
class Rectangle
{
	private :
		int length;
		int breadth;
	public:
		Rectangle()//constructor
		{
			length=breadth=1;
		}
		Rectangle(int l,int b);//parameterized Constructor
		int area();
		int Perimeter();
};
Rectangle::Rectangle(int l,int b)
{
	length=l;
	breadth=b;
}
int Rectangle::area()
{
	return length*breadth;
}
int Rectangle::Perimeter()
{
	return (2*length*breadth);
}
int main()
{
	Rectangle r(10,20);
	cout<<"Area is ::"<<r.area()<<endl;
	cout<<"Perimeter is :: "<<r.Perimeter()<<endl;
}
