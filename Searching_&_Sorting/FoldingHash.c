#include <stdio.h>
#include <math.h>

/********************************************************************************************************/

int FoldingHash(int K, int N);
int Count(int N);

/********************************************************************************************************/

int main()
{
    int N, K, F;
    printf("Enter The Total Size Of Array : ");
    scanf("%d", &N);
    printf("Enter The Key : ");
    scanf("%d", &K);
    F = FoldingHash(K, N);
    printf("%d", F);
}

/********************************************************************************************************/

int FoldingHash(int K, int N)
{
    int X = K, A, S = 0, B, L;
    A = Count(N - 1);
    int P = pow(10, A);
    while (X != 0)
    {
        B = X % P;
        S = S + B;
        X = X / P;
    }
    L = S % P;
    L = L % N;
    return L;
}

/********************************************************************************************************/

int Count(int N)
{
    int C = 0;
    while (N != 0)
    {
        C = C + 1;
        N = N / 10;
    }
    return C;
}