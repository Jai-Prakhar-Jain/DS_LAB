#include <stdio.h>

int SetMerge(int A[], int M, int B[], int N);
int SetUnion(int A[], int M, int B[], int N);
int SetIntersection(int A[], int M, int B[], int N);
int SetDifference1(int A[], int M, int B[], int N);
int SetDifference2(int A[], int M, int B[], int N);
int SetSymmetricDifference(int A[], int M, int B[], int N);

/************************************************************************************************************/

int main()
{
    int A[5] = {1, 2, 3, 4, 5}, B[6] = {0, 1, 2, 6, 7, 9};
    SetMerge(A, 5, B, 6);
    SetUnion(A, 5, B, 6);
    SetIntersection(A, 5, B, 6);
    SetDifference1(A, 5, B, 6);
    SetDifference2(A, 5, B, 6);
    SetSymmetricDifference(A, 5, B, 6);
    return 0;
}

/************************************************************************************************************/

int SetMerge(int A[], int M, int B[], int N)
{
    int C[M + N], I = 0, J = 0, K = 0;
    while (I < M && J < N)
    {
        if (A[I] > B[J])
        {
            C[K] = B[J];
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
    while (I < M)
    {
        C[K] = A[I];
        K = K + 1;
        I = I + 1;
    }
    while (J < N)
    {
        C[K] = B[J];
        K = K + 1;
        J = J + 1;
    }
    printf("\n");
    printf("Given Sets After Merging ---> ");
    for (I = 0; I < K; I++)
        printf("%d ", C[I]);
    printf("\n");
}

/************************************************************************************************************/

int SetUnion(int A[], int M, int B[], int N)
{
    int C[M + N], I = 0, J = 0, K = 0;
    while (I < M && J < N)
    {
        if (A[I] > B[J])
        {
            C[K] = B[J];
            K = K + 1;
            J = J + 1;
        }
        else if (A[I] == B[J])
        {
            C[K] = B[J];
            K = K + 1;
            J = J + 1;
            I = I + 1;
        }
        if (A[I] < B[J])
        {
            C[K] = A[I];
            K = K + 1;
            I = I + 1;
        }
    }
    while (I < M)
    {
        C[K] = A[I];
        K = K + 1;
        I = I + 1;
    }
    while (J < N)
    {
        C[K] = B[J];
        K = K + 1;
        J = J + 1;
    }
    printf("Union Of Given Sets Is ---> ");
    for (I = 0; I < K; I++)
        printf("%d ", C[I]);
    printf("\n");
}

/************************************************************************************************************/

int SetIntersection(int A[], int M, int B[], int N)
{
    int C[M + N], I = 0, J = 0, K = 0;
    while (I < M && J < N)
    {
        if (A[I] > B[J])
        {
            J = J + 1;
        }
        else if (A[I] == B[J])
        {
            C[K] = B[J];
            K = K + 1;
            J = J + 1;
            I = I + 1;
        }
        if (A[I] < B[J])
        {
            I = I + 1;
        }
    }
    while (I < M)
    {
        I = I + 1;
    }
    while (J < N)
    {
        J = J + 1;
    }
    printf("Intersection Of Given Sets Is ---> ");
    for (I = 0; I < K; I++)
        printf("%d ", C[I]);
    printf("\n");
}

/************************************************************************************************************/

int SetDifference1(int A[], int M, int B[], int N)
{
    int C[M + N], I = 0, J = 0, K = 0;
    while (I < M && J < N)
    {
        if (A[I] > B[J])
        {
            J = J + 1;
        }
        else if (A[I] == B[J])
        {
            J = J + 1;
            I = I + 1;
        }
        if (A[I] < B[J])
        {
            C[K] = A[I];
            K = K + 1;
            I = I + 1;
        }
    }
    while (I < M)
    {
        C[K] = A[I];
        K = K + 1;
        I = I + 1;
    }
    printf("Set difference A-B Is ---> ");
    for (I = 0; I < K; I++)
        printf("%d ", C[I]);
    printf("\n");
}

/************************************************************************************************************/

int SetDifference2(int A[], int M, int B[], int N)
{
    int C[M + N], I = 0, J = 0, K = 0;
    while (I < M && J < N)
    {
        if (A[I] > B[J])
        {
            C[K] = B[J];
            K = K + 1;
            J = J + 1;
        }
        else if (A[I] == B[J])
        {
            J = J + 1;
            I = I + 1;
        }
        if (A[I] < B[J])
        {
            I = I + 1;
        }
    }
    while (J < N)
    {
        C[K] = B[J];
        K = K + 1;
        J = J + 1;
    }
    printf("Set difference B-A Is---> ");
    for (I = 0; I < K; I++)
        printf("%d ", C[I]);
    printf("\n");
}

/************************************************************************************************************/

int SetSymmetricDifference(int A[], int M, int B[], int N)
{
    int C[M + N], I = 0, J = 0, K = 0;
    while (I < M && J < N)
    {
        if (A[I] > B[J])
        {
            C[K] = B[J];
            K = K + 1;
            J = J + 1;
        }
        else if (A[I] == B[J])
        {
            J = J + 1;
            I = I + 1;
        }
        if (A[I] < B[J])
        {
            C[K] = A[I];
            K = K + 1;
            I = I + 1;
        }
    }
    while (I < M)
    {
        C[K] = A[I];
        K = K + 1;
        I = I + 1;
    }
    while (J < N)
    {
        C[K] = B[J];
        K = K + 1;
        J = J + 1;
    }
    printf("Symmetric Difference Of Given Sets Are ---> ");
    for (I = 0; I < K; I++)
        printf("%d ", C[I]);
}
