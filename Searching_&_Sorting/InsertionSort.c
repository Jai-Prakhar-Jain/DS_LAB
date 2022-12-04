#include<stdio.h>
int main()
{
    int A[20],N,I,J,X;
    printf("Enter The Size Of Array : ");
    scanf("%d",&N);
    for(I=0;I<N;I++)
    {
        printf("Enter The Value Of A[%d] : ",I);
        scanf("%d",&A[I]);
    }
    for(I=1;I<=N-1;I++)
    {
        X=A[I];
        for(J=I-1;J>=0;J--)
        {
            if(A[J]>X)
            {
                A[J+1]=A[J];
                A[J]=X;
            }
        } 
    }
    for(I=0;I<N;I++)
    {
        printf("%d ",A[I]);
    }
}