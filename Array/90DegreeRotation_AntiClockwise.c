#include <stdio.h>
int main()
{
    int A[100][100], R = 0, C = 0, I = 0, J = 0, T = 0;
    printf("Enter The Number Of Rows : ");
    scanf("%d", &R);
    printf("Enter The Number Of Columns : ");
    scanf("%d", &C);
    for (I = 0; I < R; I++)
    {
        for (J = 0; J < C; J++)
        {
            printf("Enter The Value Of A[%d][%d] : ", I, J);
            scanf("%d", &A[I][J]);
        }
    }
    for (I = 0; I < R; I++)
    {
        for (J = 0; J < C; J++)
        {
            printf("%d ", A[I][J]);
        }
        printf("\n");
    }
    printf("\n");
    for (I = R-1; I >= 0; I--)
    {
        for (J = 0; J < C; J++)
        {
            printf("%d ",A[J][I]);
        }
        printf("\n");
    }
    return 0;
}