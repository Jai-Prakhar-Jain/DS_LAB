#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 100
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
void Push(int X,int B)
{
    int T;
    if(S.Top==STACKSIZE-1)
    {
        printf("\nStack Overflow");
        exit(1);
    }
    else
    {
        while(X!=0)
        {
            T=X%B;
            S.Top=S.Top+1;
            S.Item[S.Top]=T;
            X=X/B;
        }
    }
}
/**********************************************/
int Pop()
{
    char C[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int X;
    if(IsEmpty()==TRUE)
    {
        printf("\nStack Underflow");
        exit(1);
    }
    if(IsEmpty()==FALSE)
    {
        while(S.Top!=0)
        {
            X=S.Item[S.Top];
            S.Top=S.Top-1;
            printf("%c",C[X]);
        }
    }
}
/**********************************************/
int main()
{
    int N,B;
    void Initialize();
    printf("Enter The Decimal Number : ");
    scanf("%d",&N);
    printf("In Which Base You Want Number : ");
    scanf("%d",&B);
    Push(N,B);
    printf("Your Number After Base Conversion Is ---> ");
    Pop();
}