#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
/**************************************/
struct Stack
{
    int Item[10];
    int Top;
};
/**************************************/
struct Stack S;
/**************************************/
void Initialize()
{
    S.Top = -1;
}
/**************************************/
int IsEmpty()
{
    if (S.Top == -1)
        return TRUE;
    else
        return FALSE;
}
/**************************************/
void Push(int X)
{
    int T = 0;
    if (S.Top == 9)
    {
        printf("\nStack Overflow");
        exit(1);
    }
    else
    {
        while (X != 0)
        {
            T = X % 16;
            S.Top = S.Top + 1;
            S.Item[S.Top] = T;
            X = X / 16;
        }
    }
}
/**************************************/
void Pop()
{
    int X;
    if (IsEmpty() == TRUE)
    {
        printf("\nStack Underflow");
        exit(1);
    }
    else
    {
        while (S.Top != 0)
        {
            X = S.Item[S.Top];
            S.Top = S.Top - 1;
            if (X == 10)
                printf("A");
            if (X == 11)
                printf("B");
            if (X == 12)
                printf("C");
            if (X == 13)
                printf("D");
            if (X == 14)
                printf("E");
            if (X == 15)
                printf("F");
            if (X >= 0 && X <= 9)
                printf("%d", X);
        }
    }
}
/**************************************/
int main()
{
    int N;
    printf("Enter A Decimal Number : ");
    scanf("%d", &N);
    Push(N);
    printf("Hexadecimal Equivalent Of The Given Decimal Number Is ---> ");
    Pop();
    return 0;
}