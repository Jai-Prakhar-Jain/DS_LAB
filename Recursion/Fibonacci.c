#include <stdio.h>
int Fibonacci(int N);
int main()
{
    int N, I;
    printf("Enter A Number : ");
    scanf("%d", &N);
    for (int I = 0; I < N; I++)
    {
        Fibonacci(I);
        printf("%d ", Fibonacci(I));
    }
    return 0;
}
int Fibonacci(int I)
{
    if (I == 0)
    {
        return 0;
    }
    else if (I == 1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(I - 1) + Fibonacci(I - 2);
    }
}