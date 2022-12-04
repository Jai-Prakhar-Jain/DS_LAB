#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
/**********************************************/
struct Stack
{
    int Item[STACKSIZE];
    int Top;
};
struct Stack S;
/**********************************************/
void Initialize()
{
    S.Top=-1;
}
/**********************************************/
int IsEmpty()
{
    if(S.Top==-1)
    return TRUE;
    else
    return FALSE;
}
/*********************************************/
int StackTop()
{
    int X;
    X=S.Item[S.Top];
    return X;
}
/*********************************************/
void Push(int X)
{
    if(S.Top==STACKSIZE-1)
    {
        printf("\nStack Overflow");
        exit(1);
    }
    else
    {
        S.Top=S.Top+1;
        S.Item[S.Top]=X;
        printf("\nEntered Element Is ---> %d",S.Item[S.Top]);
    }
}
/*********************************************/
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
    printf("\n");
    return X;
}
/*********************************************/
int main()
{
    int X;
    Initialize();
    IsEmpty();
    Push(100);
    Push(200);
    Push(300);
    printf("%d",Pop());
    printf("%d",Pop());
    printf("\nTop Item Is ---> %d",StackTop());
    printf("%d",Pop());
    printf("%d",Pop());
}

