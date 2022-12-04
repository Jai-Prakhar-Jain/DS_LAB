#include <stdio.h>
#include <stdlib.h>
int A[100] = {0};
int Top1 = 0;
int Top2 = 0;
void Initialize1()
{
    Top1 = -1;
}
void Initialize2()
{
    Top2 = 100;
}
void Push1(int X)
{
    if (Top1 + 1 == Top2)
    {
        printf("Stack1 Overflow");
        exit(1);
    }
    else
    {
        Top1++;
        A[Top1] = X;
    }
}
void Push2(int X)
{
    if (Top2 - 1 == Top1)
    {
        printf("Stack2 Overflow");
        exit(1);
    }
    else
    {
        Top2--;
        A[Top2] = X;
    }
}
int Pop1()
{
    int X;
    if (Top1 == -1)
    {
        printf("Stack1 Underflow");
        exit(1);
    }
    else
    {
        X = A[Top1];
        Top1--;
    }
    return X;
}
int Pop2()
{
    int X;
    if (Top2 == 100)
    {
        printf("Stack2 Underflow");
        exit(1);
    }
    else
    {
        X = A[Top2];
        Top2++;
    }
    return X;
}
void Operation()
{
    int N, I, X,K;
    char C;
    printf("Press 1: To Push In Stack1 :\nPress 2: To Push In Stack2 :\nPress 3: To Pop from Stack1 :\nPress 4: To Pop from Stack2 :\n");
    scanf("%d", &N);
    if (N == 1)
    {
        printf("How Many Elements You Want To Push In Stack 1 : ");
        scanf("%d", &N);
        for (I = 0; I < N; I++)
        {
            printf("Enter Element %d : ", I);
            scanf("%d", &X);
            Push1(X);
        }
        printf("\nDo You Want To Do Anything Else If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1 )
        {
            return Operation();
        }
        else
        {
            printf("Task Completed !!!");
            exit(1);
        }
    }
    else if (N == 2)
    {
        printf("How Many Elements You Want To Push In Stack 2 : ");
        scanf("%d", &N);
        for (I = 0; I < N; I++)
        {
            printf("Enter Element %d : ", I);
            scanf("%d", &X);
            Push2(X);
        }
        printf("\nDo You Want To Do Anything Else If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
        {
            return Operation();
        }
        else
        {
            printf("Task Completed !!!");
            exit(1);
        }
    }
    else if (N == 3)
    {
        printf("How Many Elements You Want To Pop From Stack 1 : ");
        scanf("%d", &N);
        for (I = 0; I < N; I++)
        {
            printf("%d ", Pop1());
        }
        printf("\nDo You Want To Do Anything Else If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
        {
            return Operation();
        }
        else
        {
            printf("Task Completed !!!");
            exit(1);
        }
    }
    else if (N == 4)
    {
        printf("How Many Elements You Want To Pop From Stack 2 : ");
        scanf("%d", &N);
        for (I = 0; I < N; I++)
        {
            printf("%d ", Pop2());
        }
        printf("\nDo You Want To Do Anything Else If Yes Press 1 Else Press Any Key : ");
        scanf("%d", &K);
        if (K == 1)
        {
            return Operation();
        }
        else
        {
            printf("Task Completed !!!");
            exit(1);
        }
    }
}
int main()
{
    Initialize1();
    Initialize2();
    Operation();
    return 0;
}
