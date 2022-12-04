#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct Stack
{
    char Item[100];
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
char StackTop()
{
    char X;
    X=S.Item[S.Top];
    return X;
}
void Push(char X)
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
char Pop()
{
    char X;
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