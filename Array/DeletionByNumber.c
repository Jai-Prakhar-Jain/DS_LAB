#include <stdio.h>
int main()
{
    int A[20], X, N, I, P;
    printf("Enter The No. Of Elements You Want In Array ");
    scanf("%d", &N);
    for (I = 0; I < N; I++)
    {
        printf("Enter The Value Of A[%d] ", I);
        scanf("%d", &A[I]);
    }
    printf("Enter The No. You Want To Delete From The Array ");
    scanf("%d", &X);
    for (I = 0; I < N; I++)
    {
        if (X == A[I])
        {
            P = I;
        }
    }
    for (I = P; I < N; I++)
    {
        A[I] = A[I + 1];
    }
    printf("Array After Deletion Is : ");
    for (I = 0; I < N - 1; I++)
    {
        printf("%d ", A[I]);
    }
    return 0;
}