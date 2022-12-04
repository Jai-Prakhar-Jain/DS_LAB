#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define STACKSIZE 20
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
    return X;
}
/*********************************************/
int Evaluate(int A,int B,char S)
{
    int C;
    if(S=='+')
    {
        C=A+B;
    }
    if(S=='-')
    {
        C=A-B;
    }
    if(S=='*')
    {
        C=A*B;
    }
    if(S=='/')
    {
        C=A/B;
    }
    if(S=='^')
    {
        C=pow(A,B);
    }
    if(S=='%')
    {
        C=A%B;
    }
    return C;
}
/*********************************************/
void Postfix(char N[])
{
    Initialize();
    int I=0,A,B,V;
    char S;
    while(N[I]!='\0')
    {
        S=N[I];
        if(S>='0' && S<='9')
        {
            S=S-48;
            Push(S);
        }
        else
        {
            B=Pop();
            A=Pop();
            V=Evaluate(A,B,S);
            Push(V);
        }
        I++;
    }
    printf("Answer After Evaluation Of PostFix Expression Is ---> ");
    printf("%d",Pop());
}
/*********************************************/
int main()
{
    char N[20];
    printf("Enter PostFix Expression Here : ");
    gets(N);
    Postfix(N);
    return 0;
}