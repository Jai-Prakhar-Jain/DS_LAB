#include <stdio.h>

/********************************************************************************************************/

int MergeSort(int A[], int L, int H);
int Merge(int A[], int L, int M, int H);

/********************************************************************************************************/

int main()
{
    int A[100], L = 0, N, I;
    printf("Enter The Size Of Array : ");
    scanf("%d", &N);
    for (I = 0; I < N; I++)
    {
        printf("Enter The Value Of A[%d] : ", I);
        scanf("%d", &A[I]);
    }
    MergeSort(A, L, N - 1);
    for (I = 0; I < N; I++)
    {
        printf("%d ", A[I]);
    }
}

/********************************************************************************************************/

int MergeSort(int A[], int L, int H)
{
    int M;
    if (L < H)
    {
        M = (L + H) / 2;
        MergeSort(A, L, M);
        MergeSort(A, M + 1, H);
        Merge(A, L, M, H);
    }
}

/********************************************************************************************************/

int Merge(int A[], int L, int M, int H)
{
    int I = L, J = M + 1, K = L, C[L + H];
    while (I <= M && J <= H)
    {
        if (A[I] > A[J])
        {
            C[K] = A[J];
            K = K + 1;
            J = J + 1;
        }
        else
        {
            C[K] = A[I];
            K = K + 1;
            I = I + 1;
        }
    }

    while (I <= M)
    {
        C[K] = A[I];
        K = K + 1;
        I = I + 1;
    }

    while (J <= H)
    {
        C[K] = A[J];
        K = K + 1;
        J = J + 1;
    }
    for (I = L; I <= H; I++)
    {
        A[I] = C[I];
    }
}
