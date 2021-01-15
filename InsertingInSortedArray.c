#include<stdio.h>
struct Array 
{
    int A[10];
    int Size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);    
}
void InsertSort(struct Array *arr,int x)
{
    int i= arr->length-1;
    if(arr->length == arr->Size)
    {
        printf("Out of Memory");
    }
    while (i>=0 && arr->A[i]>x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}
void IsSorted(struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            printf("\nArray is Unsorted");
        }
    }
    printf("\narray is Sorted");
    
}
int main()
{
    struct Array arr = {{10,20,30,50},10,4};
    IsSorted(arr);
    InsertSort(&arr,40);
    Display(arr);
    reverse(&arr);
    Display(arr);
}