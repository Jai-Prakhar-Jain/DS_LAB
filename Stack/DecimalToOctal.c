#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct Stack
{
    int Item[STACKSIZE];
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
void Push(int X)
{
    int T=0;
    if(S.Top==STACKSIZE-1)
    {
        printf("\nStack Overflow");
        exit(1);
    }
    else
    {
        while(X!=0)
        {
            T=X%8;
            S.Top=S.Top+1;
            S.Item[S.Top]=T;
            X=X/8;
        }
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
    else
    {
        while(S.Top!=-1)
        {
            X=S.Item[S.Top];
            S.Top=S.Top-1;
            printf("%d",X);
        }
    } 
}
int main()
{
    int N;
    Initialize();
    printf("Enter A Decimal Number : ");
    scanf("%d",&N);
    Push(N);
    printf("Octal Equivalent Of The Given Decimal Number Is --->");
    Pop();
}