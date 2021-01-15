#include<stdio.h>
int main()
{
    int Name[] = "welcome/0";
    int i;
    int count = 0;
    for(i=0;Name[i]!="\0";i++)
    {
        count++;
    }
    printf("%d ",count);
 }