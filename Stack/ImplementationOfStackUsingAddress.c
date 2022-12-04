#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 100
#define TRUE 1
#define FALSE 10
struct Stack
{
    int Item[STACKSIZE];
    int Top;
};
void Initialize(struct Stack *S)
{
    S->Top = -1;
}
int IsEmpty(struct Stack *S)
{
    if (S->Top == -1)
        return TRUE;
    else
        return FALSE;
}
void Push(struct Stack *S, int X)
{
    if (S->Top == STACKSIZE - 1)
    {
        printf("Stack Overflow");
        exit(1);
    }
    else
    {
        S->Top = S->Top + 1;
        S->Item[S->Top] = X;
    }
}

int Pop(struct Stack *S)
{
    int X;
    if (S->Top==-1)
    {
        printf("Stack Underflows");
        exit(1);
    }
    else
    {
        X = S->Item[S->Top];
        S->Top = S->Top - 1;
    }
    return X;
}
int StackTop(struct Stack *S)
{
    int X;
    X = S->Item[S->Top];
    return X;
}
void Task(struct Stack *S)
{
    int N,I,K,C;
    printf("To Push Press 1 & To Pop Press 2 : ");
    scanf("%d",&N);
    if(N==1)
    {
        printf("How Many Elements You Want To Push : ");
        scanf("%d",&N);
        for(I=1;I<=N;I++)
        {
            printf("Enter Element %d : ",I);
            scanf("%d",&K);
            Push(S,K);
        }       
        printf("Do You Want To Repeat Any Task Press 1 Else Press Any Key : ");
        scanf("%d",&C);
        if(C==1)
        return Task(S);
        else
        {
            printf("Task Completed !!!");
            exit(1);
        }
    }
    if(N==2)
    {
        printf("How Many Elements You Want To Pop : ");
        scanf("%d",&N);
        for(I=1;I<=N;I++)
        {
            printf("%d ",Pop(S));
        }
        printf("\nDo You Want To Repeat Any Task Press 1 Else Press Any Key : ");
        scanf("%d",&C);
        if(C==1)
        return Task(S);
        else
        {
            printf("Task Completed !!!");
            exit(1);
        }   
    }
}
int main()
{
    struct Stack S;
    Initialize(&S);
    Task(&S);
    return 0;
}