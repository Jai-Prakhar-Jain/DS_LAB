#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STACKSIZE 50
#define TRUE 1
#define FALSE 0
struct Stack
{
    char Item[STACKSIZE];
    int Top;
} S;
void Initialize()
{
    S.Top = -1;
}
int IsEmpty()
{
    if (S.Top == -1)
        return TRUE;
    else
        return FALSE;
}
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
char Pop()
{
    char X;
    if (IsEmpty() == TRUE)
    {
        printf("Stack Underflow");
        exit(1);
    }
    else
    {
        X = S.Item[S.Top];
        S.Top = S.Top - 1;
    }
    return X;
}
int Precedence(char A, char B)
{
    if (A == '(')
        return FALSE;
    else
    {
        if (B == '(')
            return FALSE;
        else
        {
            if (B == ')')
                return TRUE;
            else
            {
                if (A == '^' || A == '*' || A == '/' || A == '%')
                {
                    if (B == '^')
                        return FALSE;
                    else
                        return TRUE;
                }
                else
                {
                    if (A == '+' || A == '-')
                    {
                        if (B == '+' || B == '-')
                            return TRUE;
                        else
                            return FALSE;
                    }
                }
            }
        }
    }
}
void InfixToPostfix(char IX[])
{
    Initialize();
    char PX[50], X;
    int I = 0, J = 0;
    while (IX[I] != '\0')
    {
        if (IX[I] >= '0' && IX[I] <= '9' || IX[I] >= 'a' && IX[I] <= 'z' || IX[I] >= 'A' && IX[I] <= 'Z')
        {
            PX[J] = IX[I];
            J++;
        }
        else
        {
            while (!IsEmpty() && Precedence(S.Item[S.Top], IX[I]))
            {
                PX[J] = Pop();
                J++;
            }
            if(IX[I]==')')
            Pop();
            else
            Push(IX[I]);
        }
        I++;
    }
    while (!IsEmpty())
    {
        PX[J] = Pop();
        J++;
    }
    PX[J] = '\0';
    printf("Postfix Expression : %s", PX);
}
int main()
{
    char IX[50];
    printf("Enter The Infix Expression : ");
    gets(IX);
    InfixToPostfix(IX);
    return 0;
}