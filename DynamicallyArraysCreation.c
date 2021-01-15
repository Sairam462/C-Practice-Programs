#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int Size;
    int length;
};
void LinearSearch(struct Array arr)
{
    int i;
    int x;
    printf("Enter Element you want to Search : ");
    scanf("%d",&x);
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]==x)
        {
            printf("Element %d found at index %d",x,i);
        }  
    }
}
void Display(struct Array arr)
{
    int i;
    printf("Elemets in Array are :: ");
    for(i=0;i<arr.length;i++)
    {
        printf("%d  ",arr.A[i]);

    }
}
int main()
{
    struct Array arr;
    int n,i;
    printf("Enter The Size of the Array :: ");
    scanf("%d",&arr.Size);
    arr.A = (int *)malloc(arr.Size*sizeof(int));
    arr.length = 0;
    printf("Enter How many Elements want to Insert :: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length = n;
    Display(arr);
    LinearSearch(arr);
}