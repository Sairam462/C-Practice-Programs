#include<stdio.h>
struct Rectangle
{
	int lenght;
	int breadth;
};
void change(struct Rectangle *p,int l)
{
	p->lenght = l;
}
int main()
{
	struct Rectangle r;
	r.lenght = 10;
	r.breadth = 100;
	printf("Lenght before : %d\n",r.lenght);
	change(&r,20);
	printf("Lenght after : %d",r.lenght);
}
