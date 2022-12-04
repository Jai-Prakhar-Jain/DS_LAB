#include <stdio.h>
int main()
{
    int A[20] = {0}, I, S = 0, X,N;
    printf("Enter The No. Of Elements You Want In Array ");
    scanf("%d", &N);
    for (I = 0; I < N; I++)
    {
        printf("Enter The Value Of A[%d] ", I);
        scanf("%d", &A[I]);
    }
    for (I = 0; I <N; I++)
    {
        S = S + A[I];
    }
    X = N * (N + 1) * 0.5;
    printf("The Missing Number Is %d", (X - S));
    return 0;
}