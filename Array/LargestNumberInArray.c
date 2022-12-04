#include <stdio.h>
int main()
{
    int A[5], I;
    for (I = 0; I <= 4; I++)
    {
        printf("Enter The Value Of A[%d] ", I);
        scanf("%d", &A[I]);
    }
    for (I = 0; I <= 4; I++)
    {
        if (A[0] >= A[I])
        {
            A[0] = A[0];
        }
        else
        {
            A[0] = A[I];
        }
    }
    printf("The Largest No. From The Given Nos. is %d", A[0]);
}