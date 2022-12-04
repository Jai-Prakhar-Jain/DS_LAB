#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], S[10][10];
    int R, C, I = 0, J = 0;
    printf("Enter The Value Of Rows ");
    scanf("%d", &R);
    printf("Enter The Value Of Column ");
    scanf("%d", &C);
    for (I = 0; I < R; I++)
    {
        for (J = 0; J < C; J++)
        {
            printf("Enter The Value Of A[%d][%d] ", I, J);
            scanf("%d", &A[I][J]);
        }
    }
    for (I = 0; I < R; I++)
    {
        for (J = 0; J < C; J++)
        {
            printf("Enter The Value Of B[%d][%d] ", I, J);
            scanf("%d", &B[I][J]);
        }
    }
    printf("\n");
    for (I = 0; I < R; I++)
    {
        for (J = 0; J < C; J++)
        {
            S[I][J] = A[I][J] + B[I][J];
        }
    }
    for (I = 0; I < R; I++)
    {
        for (J = 0; J < C; J++)
        {
            printf("%d ", S[I][J]);
        }
        printf("\n");
    }
    return 0;
}