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
    if (A == ')')
        return TRUE;
    else
    {
        if (B == ')')
            return TRUE;
        else
        {
            if (B == '(')
                return FALSE;
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
void InfixToPrefix(char IX[])
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
            while (!IsEmpty() && !Precedence(IX[I],S.Item[S.Top]))
            {
                PX[J] = Pop();
                J++;
            }
            if(IX[I]=='(')
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
    strrev(PX);
    printf("Prefix Expression : %s", PX);
}
int main()
{
    char X[50],IX[50];
    int I=0,J=0;
    printf("Enter The Infix Expression : ");
    gets(X);
    while(X[I]!='\0')
    {
        I++;
    }
    I=I-1;
    while(I>=0)
    {
        IX[J]=X[I];
        J++;
        I--;
    }
    InfixToPrefix(IX);
    return 0;
}