#include <stdio.h>
#include <stdlib.h>

/********************************************************************************************************/

void QuickSort(int A[], int L, int H);
int Partition(int A[], int L, int H);

/********************************************************************************************************/

int main()
{
    int A[50] = {0}, N, L = 0, I;
    printf("Enter The Size Of Array : ");
    scanf("%d", &N);
    A[N] = INT_MAX;
    for (I = 0; I < N; I++)
    {
        printf("Enter The Value Of A[%d] : ", I);
        scanf("%d", &A[I]);
    }
    QuickSort(A, L, N - 1);
    for (I = 0; I < N; I++)
    {
        printf("%d ", A[I]);
    }
    return 0;
}

/********************************************************************************************************/

void QuickSort(int A[], int L, int H)
{
    int J;
    if (L < H)
    {
        J = Partition(A, L, H);
        QuickSort(A, L, J - 1);
        QuickSort(A, J + 1, H);
    }
}

/********************************************************************************************************/

int Partition(int A[], int L, int H)
{
    int I = L, J = H + 1, T, M;
    M = (L + H) / 2;
    T = A[L];
    A[L] = A[M];
    A[M] = T;
    int P = A[L];
    do
    {
        do              
        {
            I = I + 1;
        } while (A[I] < P);
        do
        {
            J = J - 1;
        } while (A[J] > P);
        if (I < J)
        {
            T = A[I];
            A[I] = A[J];
            A[J] = T;
        }
    } while (I < J);
    T = A[J];
    A[J] = A[L];
    A[L] = T;
    return J;
}
