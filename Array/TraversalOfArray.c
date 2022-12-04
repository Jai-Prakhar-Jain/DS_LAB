#include <stdio.h>
int main()
{
    int A[20] = {0}, I, N;
    printf("Enter The No. Of Elements You Want In Array ");
    scanf("%d", &N);
    for (I = 0; I < N; I++)
    {
        printf("Enter The Value Of A[%d] ", I);
        scanf("%d", &A[I]);
    }
    for (I = 0; I < N; I++)
    {
        printf("%d ", A[I]);
    }
    return 0;
}