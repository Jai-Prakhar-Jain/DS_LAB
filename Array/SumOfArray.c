#include <stdio.h>
int main()
{
    int A[20] = {0}, I, Sum = 0, J,N;
    printf("Enter The No. Of Elements You Want In Array ");
    scanf("%d", &N);
    for (I = 0; I < N; I++)
    {
        printf("Enter The Value Of A[%d] ", I);
        scanf("%d", &A[I]);
    }
    for (J = 0; J < N; J++)
    {
        Sum = Sum + A[J];
    }
    printf("%d", Sum);
    return 0;
}