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
void swap(int *a,int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;

}
void MoveZero(struct Array *arr)
{
    int i,j,temp;
    for(i=0;i<arr->length;i++)
    {
        if(arr->A[i]==0)
        {
            for(j=0;j<arr->length;j++)
            {
                if(arr->A[j]!=0)
                {
                        swap(&arr->A[i],&arr->A[j]);
                }
            }
        }
    }
}
int main()
{
    struct Array arr = {{1,12,0,12,0,15,0},10,7};
    MoveZero(&arr);
    Display(arr);

}