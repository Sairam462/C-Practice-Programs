#include<stdio.h>
void TOH(char A,char B,char C,int n)
{
    if(n==1)
    {
        printf("Move Disc 1 from %c to %c\n",A,C);
    }
    else
    {
    TOH(A,C,B,n-1);
    printf("Move Disc %d from %c to %c\n",n,A,C);
    TOH(B,A,C,n-1);
    }
}
int main()
{
    char A ='A';
    char B = 'B';
    char C = 'C';
    int n = 3 ;
    TOH(A,B,C,n); 
    return 0;
}