#include <stdio.h>
int Fibonacci(int I, int A[], int N);
int main()
{
    int N, I;
    printf("Enter A Number : ");
    scanf("%d", &N);
    int A[N];
    for (I = 0; I < N; I++)
    {
        A[I]=0;
    }
    for (I = 0; I < N; I++)
    {
        Fibonacci(I, A, N);
        printf("%d ", Fibonacci(I, A, N));
    }
    return 0;
}
int Fibonacci(int I, int A[], int N)
{
    if (I == 0)
    {
        A[0] = 0;
    }

    else
    {
        if (I == 1)
        {
            A[1] = 1;
        }
        else
        {
            if (A[I] == 0)
            {
                A[I] = Fibonacci(I - 1, A, N) + Fibonacci(I - 2, A, N);
            }
        }
    }
    return A[I];
}