#include <stdio.h>
int main()
{
    int A[20], N, I, L, X;
    printf("Enter The No. Of Elements You Want In Array ");
    scanf("%d", &N);
    for (I = 0; I <= N - 1; I++)
    {
        printf("Enter The Value Of A[%d] ", I);
        scanf("%d", &A[I]);
    }
    printf("Enter The Index Where You Want To Insert The Number ");
    scanf("%d", &L);
    printf("Enter The Number To Be Inserted ");
    scanf("%d", &X);
    for (I = N; I >= L; I--)
    {
        A[I + 1] = A[I];
    }
    A[L] = X;
    printf("Array After Insertion Is : ");
    for (I = 0; I <= N; I++)
    {
        printf("%d ", A[I]);
    }
    return 0;
}