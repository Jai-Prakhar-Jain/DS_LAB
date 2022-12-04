#include <stdio.h>
int factorial(int N);

int main()
{
    int N;
    printf("Enter A Number : ");
    scanf("%d", &N);
    factorial(N);
    printf("Factorial Of The Given Number Is : %d", factorial(N));
    return 0;
}

int factorial(int X)
{
    if (X == 0 && X == 1)
        return 1;
    if (X > 1)
        return X * factorial(X - 1);
}