#include<iostream>
using namespace std;
void PrintSnake(int *A)
{
    for(int i=0;i<3;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<3;i++)
            {
                cout<<A[i][j];
            }
        }
        else
        {
            for(int j=3-1;j>=0;j--)
            {
                cout<<A[i][j];
            }
        }
        
    }
}
int main()
{
    int A[3][3] = {{10,20,30},
                    {40,50,60},
                    {70,80,90}};
    PrintSnake(A);
}