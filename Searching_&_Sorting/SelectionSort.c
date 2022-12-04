#include<stdio.h>
int main()
{
    int A[20]={0},I,J,N,M,T;
    printf("Enter The Size Of Array ");
    scanf("%d",&N);
    for(I=0;I<N;I++)
    {
        printf("Enter The Value Of A[%d] ",I);
        scanf("%d",&A[I]);
    }
    for(I=0;I<N-1;I++)
    {
        M=I;
        for(J=I+1;J<N;J++)
        {
            if(A[J]<A[M])
            {
                M=J;
            }    
        }
        T=A[I];
        A[I]=A[M];
        A[M]=T; 
    }
    for(I=0;I<N;I++)
    {
        printf("%d ",A[I]);
    }
}