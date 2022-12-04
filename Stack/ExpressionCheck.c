#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
/**********************************************/
struct Stack
{
    char Item[STACKSIZE];
    int Top;
};
struct Stack S;
/**********************************************/
void Initialize()
{
    S.Top = -1;
}
/**********************************************/
int IsEmpty()
{
    if (S.Top == -1)
        return TRUE;
    else
        return FALSE;
}
/*********************************************/
int StackTop()
{
    char X;
    X = S.Item[S.Top];
    return X;
}
/*********************************************/
int Pop()
{
    char X;
    if (IsEmpty() == TRUE)
    {
        printf("\nStack Underflow");
        exit(1);
    }
    if (IsEmpty() == FALSE)
    {
        X = S.Item[S.Top];
        S.Top = S.Top - 1;
    }
}
/*********************************************/
void Push(char C[])
{
    int F = 1, I = 0;
    if (S.Top == STACKSIZE - 1)
    {
        printf("\nStack Overflow");
        exit(1);
    }
    else
    {
        while (C[I] != '\0')
        {
            if (C[I] == '(')
            {
                S.Top = S.Top + 1;
                S.Item[S.Top] = C[I];
            }
            if (C[I] == ')')
            {
                if (IsEmpty() != TRUE)
                {
                    Pop();
                }
                else
                {
                    F = 0;
                    break;
                }
            }
            I++;
        }
        if(F==1)
        {
            if(IsEmpty()==TRUE)
            {
                printf("Valid Expression");
            }
            else
            {
                printf("Invalid Expression");
            }
        }
        else
        {
            printf("Invalid Expression");
        }
    }
}
/*********************************************/
int main()
{
    char C[20];
    Initialize();
    printf("Enter Expression Here : ");
    gets(C);
    Push(C);
}