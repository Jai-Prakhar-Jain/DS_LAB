#include <stdio.h>
/********************************************************************************************************/

void CountingSort(int A[], int N);

/*********************************************************************************************************/
int main()
{
    int A[100] = {0}, N, I;
    printf("Enter The Size Of Array : ");
    scanf("%d", &N);
    for (I = 0; I < N; I++)
    {
        printf("Enter The Value Of A[%d] : ", I);
        scanf("%d", &A[I]);
    }
    CountingSort(A, N);
}

/*********************************************************************************************************/

void CountingSort(int A[], int N)
{
    int M = A[0], I;
    for (I = 0; I < N; I++)
    {
        if (M < A[I])
            M = A[I];
    }
    int C[M + 1], B[N];
    for (I = 0; I <= M; I++)
    {
        C[I] = 0;
        B[I] = 0;
    }
    for (I = 0; I < N; I++)
    {
        C[A[I]] = C[A[I]] + 1;
    }
    for (I = 0; I <= M; I++)
    {
        if (I == 0)
        {
            C[I] = C[I];
        }
        else
        {
            C[I] = C[I] + C[I - 1];
        }
    }
    for (I = N; I >= 0; I--)
    {
        B[C[A[I]]] = A[I];
        C[A[I]] = C[A[I]] - 1;
    }
    for (I = 1; I <= N; I++)
    {
        printf("%d ", B[I]);
    }
}