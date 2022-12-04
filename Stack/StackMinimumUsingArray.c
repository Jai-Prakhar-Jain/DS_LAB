#include"MyStackInt.h"
int main()
{
    int A[100]={0},I=0,M,X;
    Push(50);
    Push(20);
    Push(150);
    Push(30);
    Push(05);
    Push(60);
    while(!IsEmpty())
    {
        X=Pop();
        A[I]=X;
        I++;
    }
    M=A[0];
    I=0;
    while(A[I]!=0)
    {
        if(M>A[I])
        {
            M=A[I];
        }
        I++;
    }
    printf("%d",M);
    return 0;
}