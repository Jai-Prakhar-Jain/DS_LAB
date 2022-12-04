#include <stdio.h>
#include <math.h>

/********************************************************************************************************/

int MidSquareHash(int K, int N);
int Count(int N);

/********************************************************************************************************/

int main()
{
    int K, N, L;
    printf("Enter The Total Size Of Array : ");
    scanf("%d", &N);
    printf("Enter The Key : ");
    scanf("%d", &K);
    L = MidSquareHash(K, N);
    printf("%d", L);
}

/********************************************************************************************************/

int MidSquareHash(int K, int N)
{
    int A, B, L;
    long long C, X;
    A = Count(N - 1);
    B = Count(K);
    int P = pow(10, A);
    C = ((2 * B) - A) / 2;
    X = (K * K) / pow(10, C);
    L = X % P;
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