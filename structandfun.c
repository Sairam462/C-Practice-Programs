#include<stdio.h>
struct Rectangle
{
	int length;
	int breadth;
};
void Intialise(struct Rectangle *p,int l,int b)
{
	p->length = l;
	p->breadth = b;
}
int Area(struct Rectangle r)
{
	return r.length * r.breadth;
}
void change(struct Rectangle *p,int m)
{
	p->length = m;
}
int main()
{
	struct Rectangle r;
	Intialise(&r,10,20);
	printf("Lenght = %d \n Breadth = %d\n",r.length,r.breadth);
	printf("%d",Area(r));
	change(&r,100);
	printf("Lenght after change = %d ",r.length);
}
