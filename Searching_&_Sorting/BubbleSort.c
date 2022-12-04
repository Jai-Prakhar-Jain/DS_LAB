#include<stdio.h>
int main()
{
    int A[20]={0},I,J,N,T;
    printf("Enter The Size Of Array ");
    scanf("%d",&N);
    for(I=1;I<=N;I++)
    {
        printf("Enter The Value Of A[%d] ",I);
        scanf("%d",&A[I]);
    }
    for(I=0;I<N;I++)
    {
        for(J=0;J<N-I;J++)
        {
            if(A[J]>A[J+1])
            {
                T=A[J];
                A[J]=A[J+1];
                A[J+1]=T;
            }
        }
    }
    for(I=1;I<=N;I++)
    {
        printf("%d ",A[I]);
    }
    return 0;
}
