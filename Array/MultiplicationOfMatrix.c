#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int R1, C1, R2, C2, I = 0, J = 0, K = 0, S = 0;
    printf("Enter The Value Of Rows For First Matrix ");
    scanf("%d", &R1);
    printf("Enter The Value Of Column For First Matrix ");
    scanf("%d", &C1);
    printf("Enter The Value Of Rows For Second Matrix ");
    scanf("%d", &R2);
    printf("Enter The Value Of Column For Second Matrix ");
    scanf("%d", &C2);
    for (I = 0; I < R1; I++)
    {
        for (J = 0; J < C1; J++)
        {
            printf("Enter The Value Of A[%d][%d] ", I, J);
            scanf("%d", &A[I][J]);
        }
    }
    for (I = 0; I < R2; I++)
    {
        for (J = 0; J < C2; J++)
        {
            printf("Enter The Value Of B[%d][%d] ", I, J);
            scanf("%d", &B[I][J]);
        }
    }
    if (C1 == R2)
    {
        for (I = 0; I < R1; I++)
        {
            for (J = 0; J < C2; J++)
            {
                S = 0;
                for (K = 0; K < R2; K++)
                {
                    S = S + (A[I][K] * B[K][J]);
                }
                C[I][J] = S;
            }
        }
    }
    else
    {
        printf("These Matrix Cannot Be Multiplied");
    }
    for (I = 0; I < R1; I++)
    {
        for (J = 0; J < C2; J++)
        {
            printf("%d ", C[I][J]);
        }
        printf("\n");
    }
}