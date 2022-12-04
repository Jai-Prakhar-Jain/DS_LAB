#include <stdio.h>
int main()
{
    int A[7] = {0, 10, 20, 30, 40, 50}, I, N, P;
    printf("Enter The No. You Want To Insert In The Array ");
    scanf("%d", &N);
    for (I = 0; I <= 5; I++)
    {
        if (N > A[I] && N < A[I + 1])
        {
            P = I + 1;
        }
    }
    for (I = 7; I > P - 1; I--)
    {
        A[I + 1] = A[I];
    }
    for (I = 0; I <= 6; I++)
    {
        A[P] = N;
        printf("%d ", A[I]);
    }
    return 0;
}