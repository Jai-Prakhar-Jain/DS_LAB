#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct Stack
{
    int Item[100];
    int Top;
};
struct Stack S;
void Initialize()
{
    S.Top=-1;
}
int IsEmpty()
{
    if(S.Top==-1)
    return TRUE;
    else
    return FALSE;
}
int StackTop()
{
    int X;
    X=S.Item[S.Top];
    return X;
}
void Push(int X)
{
    if(S.Top==100-1)
    {
        printf("\nStack Overflow");
        exit(1);
    }
    else
    {
        S.Top=S.Top+1;
        S.Item[S.Top]=X;
    }
}
int Pop()
{
    int X;
    if(IsEmpty()==TRUE)
    {
        printf("\nStack Underflow");
        exit(1);
    }
    if(IsEmpty()==FALSE)
    {
        X=S.Item[S.Top];
        S.Top=S.Top-1;
    }
    return X;
}