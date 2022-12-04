#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STACKSIZE 50
#define TRUE 1
#define FALSE 0
/*********************************************/
struct Stack
{
    char Item[STACKSIZE];
    int Top;
} S;
/*********************************************/
void Initialize()
{
    S.Top = -1;
}
/*********************************************/
int IsEmpty()
{
    if (S.Top == -1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
/*********************************************/
void Push(char X)
{
    if (S.Top == STACKSIZE - 1)
    {
        printf("Stack Overflow");
        exit(1);
    }
    else
    {
        S.Top = S.Top + 1;
        S.Item[S.Top] = X;
    }
}
/*********************************************/
char Pop()
{
    char X;
    if (IsEmpty() == TRUE)
    {
        printf("Stack Underflows");
        exit(1);
    }
    else
    {
        X = S.Item[S.Top];
        S.Top = S.Top - 1;
    }
    return X;
}
/*********************************************/
int main()
{
    char X[50], Y[50], Z;
    int I = 0, F = 1;
    printf("Enter The String : ");
    gets(X);
    while (X[I] != '\0')
    {
        Push(X[I]);
        I++;
    }
    I = 0;
    while (S.Top != -1)
    {
        Z = Pop();
        Y[I] = Z;
        I++;
    }
    I = 0;
    while (X[I] != '\0')
    {
        if (X[I] == Y[I])
        {
            I++;
        }
        else
        {
            F = 0;
            break;
        }
    }
    if (F == 1)
    {
        printf("Given String Is A Palindrome");
    }
    else
    {
        printf("Given String Is Not A Palindrome");
    }
    return 0;
}
