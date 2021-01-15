#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int A[10];
    int Size;
    int length;
};
int Largest(struct Array arr)
{
    int i;
    int res = 0;
    for(i=1;i<arr.length;i++)
        if(arr.A[i]>arr.A[res])                                                 // This is The Efficient Code i.e O(n)
            res = i;
    printf("\nHigehst Element is :: %d at Index %d",arr.A[res],res);
}
//
    /* Largest(struct Array arr)
        {
            int i,j;
            for(i=0;i<arr.length;i++)
            {
                int flag =1;
                for(j=0;j<arr.length;j++)
                {
                    if(arr.A[j]>arr.A[i])           //This is the  Code of O(n^2)
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag==1)
                {
                    printf("The Highest Element is %d at Index %d",arr.A[i],i);
                }
            }
        }
    */
void Display(struct Array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
void Insert(struct Array *arr , int index , int x)
{
    int i;
    if(index>=0 && index <= arr->length)
    {
        for(i=arr->length;i>index;i--)
            arr->A[i] = arr->A[i-1];
        arr->A[index] = x;
        arr->length++;
    }
}
void Append(struct Array *arr,int x)
{
    if(arr->length<arr->Size)
        arr->A[arr->length++] = x;
}
int main()
{
    struct Array arr = {{50,25,72,87},10,4};
    Append(&arr,60);
    Insert(&arr,4,50);
    Display(arr);
    Largest(arr);
    
}