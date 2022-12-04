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
    char X[50];
    int I = 0;
    printf("Enter The String : ");
    gets(X);
    while (X[I] != '\0')
    {
        Push(X[I]);
        I++;
    }
    while (S.Top != -1)
    {
        printf("%c", Pop());
    }
    return 0;
}
