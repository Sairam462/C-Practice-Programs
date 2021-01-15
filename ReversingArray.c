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
void Reverse(struct Array *arr)
{
    int i,j,temp;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}
int main()
{
    struct Array arr = { { 10,20,30,40},10,4};
    Reverse(&arr);
    Display(arr);
}
