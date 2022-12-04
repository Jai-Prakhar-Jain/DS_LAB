#include <stdio.h>
/********************************************************************************************************/

int DivisionHash(int N, int K);
int NearestPrime(int N);

/********************************************************************************************************/

int main()
{
    int N, K, I;
    printf("Enter The Size Of Array : ");
    scanf("%d", &N);
    printf("Enter The Key : ");
    scanf("%d", &K);
    I = DivisionHash(K, N);
    printf("%d", I);
}

/********************************************************************************************************/

int DivisionHash(int K, int N)
{
    int NP, L;
    NP = NearestPrime(N);
    L = K % NP;
    return L;
}

/********************************************************************************************************/

int NearestPrime(int N)
{
    int I, C = 0;
    for (I = 1; I <= N; I++)
    {
        if (N % I == 0)
            C = C + 1;
    }
    if (C == 2)
    {
        return N;
    }
    else
    {
        return NearestPrime(N - 1);
    }
}