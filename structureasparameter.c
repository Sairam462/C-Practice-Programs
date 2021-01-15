#include<stdio.h>
struct Rectangle
{
	int length;
	int breadth;
};
 area(struct Rectangle r)
{
	return r.length*r.breadth;
}
int main()
{
	struct Rectangle r;
	r.length = 10;
	r.breadth = 20;
	printf("Area of Rectangle is : %d",area(r));
}
