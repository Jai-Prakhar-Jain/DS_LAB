#include <stdio.h>
int main()
{
    int A[20] = {0}, K, I, J, T, N;
    printf("Enter The No. Of Elements You Want In Array ");
    scanf("%d", &N);
    for (K = 1; K <= N; K++)
    {
        printf("Enter The Value Of A[%d]", K);
        scanf("%d", &A[K]);
    }
    for (I = 0, J = N; I <= J; I++, J--)
    {
        T = A[J];
        A[J] = A[I];
        A[I] = T;
    }
    printf("Reverse Of The Given Array :");
    for (I = 0; I < N; I++)
        printf("%d ", A[I]);
    return 0;
}